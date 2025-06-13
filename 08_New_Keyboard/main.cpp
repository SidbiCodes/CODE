// Define math constants (e.g., M_PI) before including <cmath> on MinGW
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <vector>
#include <string>

// Screen (terminal) size
constexpr int SCREEN_WIDTH  = 50;
constexpr int SCREEN_HEIGHT = 10;

// Total number of characters in the frame buffer (width × height)
constexpr int BUFFER_SIZE = SCREEN_WIDTH * SCREEN_HEIGHT;

// ASCII characters used for shading, from dimmest → brightest
const char* SHADING_CHARS = ".,-~:;=!*#$@";

int main() {
    // Major and minor radii of the torus
    const float R1 = 1.0f;   // distance from center of hole to center of tube
    const float R2 = 0.5f;   // radius of the tube
    // Distance from viewer to “screen” (along z‐axis)
    const float K2 = 5.0f;
    // Projection constant: larger K1 → donut appears larger on screen
    const float K1 = SCREEN_WIDTH * K2 * 3 / (8 * (R1 + R2));

    // Allocate one string for the frame buffer (initialized to spaces)
    std::string output_buffer(BUFFER_SIZE, ' ');
    // Allocate a z‐buffer (depth buffer) of the same size
    std::vector<float> z_buffer(BUFFER_SIZE, 0.0f);

    // Choose fixed rotation angles A and B (no animation)
    const float A = 0.0f;             // rotation around X‐axis
    const float B = 0.0f;             // rotation around Z‐axis

    // Spacing for iterating θ and φ around the torus
    const float theta_spacing = 0.07f;
    const float phi_spacing   = 0.02f;

    // 1) Clear both buffers
    std::fill(output_buffer.begin(), output_buffer.end(), ' ');
    std::fill(z_buffer.begin(), z_buffer.end(), 0.0f);

    // 2) Loop over θ and φ exactly once to compute the “static” donut
    for (float theta = 0.0f; theta < 2.0f * M_PI; theta += theta_spacing) {
        float costheta = std::cos(theta);
        float sintheta = std::sin(theta);

        for (float phi = 0.0f; phi < 2.0f * M_PI; phi += phi_spacing) {
            float cosphi = std::cos(phi);
            float sinphi = std::sin(phi);

            // 2.1) Coordinates of a point on the torus before rotation:
            //     circle center (in the X‐Y plane) = R1 + R2 * cosθ
            float circlex = R1 + R2 * costheta;
            float circley = R2 * sintheta;

            // 2.2) 3D coordinates before rotation:
            float x = circlex * cosphi;   // x in “torus space”
            float y = circlex * sinphi;   // y in “torus space”
            float z = circley;            // z in “torus space”

            // 2.3) Rotate around X‐axis by A, then around Z‐axis by B
            //   Rotation about X-axis (A):
            float x1 = x;
            float y1 = y * std::cos(A) - z * std::sin(A);
            float z1 = y * std::sin(A) + z * std::cos(A);

            //   Rotation about Z-axis (B):
            float x2 = x1 * std::cos(B) - y1 * std::sin(B);
            float y2 = x1 * std::sin(B) + y1 * std::cos(B);
            float z2 = z1;

            // 2.4) Perspective projection onto 2D screen:
            float ooz = 1.0f / (z2 + K2);  // “one over z” (depth scaling)
            int xp = static_cast<int>(SCREEN_WIDTH  / 2 + K1 * ooz * x2);
            int yp = static_cast<int>(SCREEN_HEIGHT / 2 - K1 * ooz * y2);

            // 2.5) Compute surface normal (in local torus coordinates)
            float nx = costheta * cosphi;
            float ny = costheta * sinphi;
            float nz = sintheta;

            // 2.6) Choose a light direction (arbitrary) and normalize it
            float lx = 0.0f;
            float ly = 1.0f;
            float lz = -1.0f;
            float length_light = std::sqrt(lx*lx + ly*ly + lz*lz);
            lx /= length_light;  ly /= length_light;  lz /= length_light;

            // 2.7) Dot product = luminance
            float luminance = nx*lx + ny*ly + nz*lz;

            // Only plot if the surface is facing the light
            if (luminance > 0) {
                // 2.8) Compute the 1D index into buffers (row-major)
                int idx = xp + SCREEN_WIDTH * yp;

                // 2.9) If (xp, yp) are inside screen and this point is “in front”
                if (xp >= 0 && xp < SCREEN_WIDTH && yp >= 0 && yp < SCREEN_HEIGHT) {
                    if (ooz > z_buffer[idx]) {
                        z_buffer[idx] = ooz;
                        // Map luminance [0..1] to an index into SHADING_CHARS
                        int luminance_index = static_cast<int>(luminance * 11.0f);
                        if (luminance_index < 0)  luminance_index = 0;
                        if (luminance_index > 11) luminance_index = 11;
                        output_buffer[idx] = SHADING_CHARS[luminance_index];
                    }
                }
            }
        }
    }

    // 3) Print the static donut: output_buffer line by line
    for (int i = 0; i < BUFFER_SIZE; ++i) {
        std::cout << output_buffer[i];
        if ((i + 1) % SCREEN_WIDTH == 0) {
            std::cout << "\n";
        }
    }

    return 0;
}
