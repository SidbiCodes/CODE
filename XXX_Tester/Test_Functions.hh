#include <iostream>
using namespace std;

//func 1: dynamic memo allocation for array (allocation and array member call)
 
void printArrayMembers (const int &size){
    int *arrPtr {nullptr};
    arrPtr = new int [size];


    
    delete[] arrPtr; // Free memory after use   

}