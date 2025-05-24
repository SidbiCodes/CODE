1)C-style character functions

#include <cctype>

_____________________________________________
check testing character functions online for cctype lybrary. 
#They include checking for characters, numbers, upper cases, lower case, printable characters,
punctuations, whitespaces its

_____________________________________________

Character conversion functions
tolower(C) and toupper(c) to convert to upper and lower strings
_____________________________________________

2)C-Style strings

#include <cstring>


contiguous in mmeory and stored like array of characters; terminated by a null value '\0'(no. of characters(array size) = char+1); char accessed like array members.

eg: "Frank" is a C-style string. the array is a size of 6 char         F r a n k \0

char my_name[] {"Frank"}; // initialized to frank. therefore        my_name[5]='y';  can not be true as string terminates with a \0.
in case of char my_name[8] {"Frank"}
F r a n k \0 \0 \0 
the string can have two more letters added but the last number must be a null character.
i.e. my my_name [5] = 'y'; is possible

in case we do not initialize and just declare an array:
char my_name [8];
then we can not assign my_name = "Frank"; 
as the c string looks for a null character for termination and till it iws not found, the string would keep assigning.
As we did not initialize, the memory address of array is randomized wirth characters which may or may not be null chatracter.

we need to use:
strcpy(my_name,"Frank"); // OK

cstring functions:
1)Copying
2)Concatination
3)comparison
4)searching
......

example of copying and concatinating:

#include <iostream>
#include <cstring>

int main() {
    // Allocate enough space for the result
    char str1[100] = "Hello, ";
    char str2[] = "World!";

    // Concatenate str2 to str1
    std::strcat(str1, str2);

    std::cout << "Concatenated String: " << str1 << std::endl;

    return 0;
}
_____________________________________________

Ways to initialize c style streings
i have a doubt: if i initialize the string like 
char string [] {"abcs"};
char string []= "abcs";
and char string [] {0};

what is the difference and why is 0 not in "" or ''


ChatGPT said:
Great questions — let's break each one down to clarify what’s happening in each case, and why {0} works even though it's not in double or single quotes.

🔹 1. char string[] = "abcs";
This is the standard way to initialize a C-style string in C or C++.

What it does:
"abcs" is a string literal, which is actually {'a', 'b', 'c', 's', '\0'}.

The compiler automatically adds a null terminator ('\0') at the end.

string is an array of 5 characters: ['a', 'b', 'c', 's', '\0'].

🔹 2. char string[] { "abcs" };
This is uniform initialization (C++11 and newer).

What it does:
Also valid in C++.

{"abcs"} is treated the same way as "abcs" — an initializer list with a string literal.

Internally behaves exactly like char string[] = "abcs";

✅ Conclusion:
Both char string[] = "abcs"; and char string[] { "abcs" }; are equivalent in modern C++.

🔹 3. char string[] { 0 };
This is where things get interesting.

What it does:
It creates a char array with one element, initialized to 0.

0 is an integer literal, not a string or character.

But in C/C++, char is just a tiny integer type.

So {0} sets the first byte of the array to 0, which is the null character ('\0'), and that’s a valid empty string.


















































































































































































































































