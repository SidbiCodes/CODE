Website: https://cppreference.com/w/cpp/standard_library.html
this website has standard standard_library headers, i.i always use : using namespace std;

1)Function definition: 
name should be meaningful
parameter must havwe data type
if no return type then use void
declare function with return type datatype and return the same value.

2)Function prototype: forward declarations
declare function without braces like variables and end with a ;-----all parameters and the return type should be declared.

3) parameters and return statement:
Formal parameters: Parameter used while defining the function declarations
Actual Parameters: aka argument, parameter used while calling the function.

4)default arguement: int defaultValueFunction (int a, int b = 2);
here only, 1 arguement must be passed during the function call.
default functions cna be overwritten if an argument is passed otherwise the default value is used.
check test.hh

5)Function Overloading:
Rules:
function can either be overloaded with void ánd no return or with return type declaration and return type
    -  multiple function with same name.
    -  function is chosen on the basis of parameter datatype
    -  if the passed arguement is not in the overload definition then the argument is promoted to the datatype available therefore Char passed in the function with
       no declaration is overloaded with char shall return the ASCII number of the character.
    -  default arguments: if no argument is passed then default arguement is chosen from the 
       overload definition. // compiler error if 2 defaults are defined.

    - there is no return type to the functions.

     void Func (int = 5); 
     void Func (double);
     void Func (float);

     Func(1); //calls the def with int
     Func(0.5);//calls the def with double
     Func(0.05F);// calls the def with Float
     Func();// calls the def with default value
     Func('a');// this shall return the ASCII code as promotion

6) Passing an Array through a function:
   idea: iteration through the array and performing function for each element of array.
   a function calls the address of array elements.
   -therefore if no size is mentioned in function array parameter, the function will not be able identify the correct address.
   -the correct address can be defined by iteration with cmoparison ti size:

//This specific example is a function that makes all the elements to 0.


   void funcZeroArray (int array[], size_t size);           / void funcZeroArray (const int array[], size_t size); // read only function: useful in printing array
   void funcZeroArray (int array [], size_t size){

      for(size_t i {0}, i< size;i++){

         array[i]= 0;

      }
   }

this is how you iterate throught the Array any apply the finction to each element.

7) Pass by Referance: like array, we can use the address of any variable to change the value at that address. 
   - The actual parameter is changede if we change the formal parameter.
   - Used with the '&' sign.

   void PassByRef(int &num); //this says num is an alies for any integer passed through the function.
   therefore inside the function if the value of num is changed, it refers the address of the integer passed
   and would change the value of that (actual) integer parameter.

   int number {0};
   cout<<number; // 0

   void PassByRef(int &num){

      num = 100;
   }
    PassByRef (number);

    cout<< number;// 100;
   
   - To avoid copying of variables in case of passing dynaminc datasize like vectors, we can pass the vector by referance or const referance to make it read only.
     this results in saving a lot of momory.
   ________________________________________________

1)Function calls workflow:
Uses function call stack. ---> Last in first out (LIFO) 
2)stackoverflow: follows LIFO system. the last function calles returns so,ething to the previous functionm which returns something to main.
   each function is reversed and popped or destacked in the memory  after returning something to the previous finction till main is reached.
   - too many function calls or nested functions can cause stack overflow.

3)Inline function: inline int func();
inline: to avoid too much overhead? not that important just remember inline keyword is used to make code faster and are usually in header files.

4)Recursive Function:Recursivefunction is a function that calls itself directly or indirectly through another function.
   1) always define the bace case- this means that define an if statement for the exception (base case) where reecursion can stop and return the exception result.
   2) when out of the base case, return the recursive function. that is return should call the function for the result (eg factorial and fibonacci)
   -use the function recursively only when needed as it can cause stack overflow. #basically function returns a function till it reaches main
   #include <iostream>

#include <string>

int sum_of_digits(int n) {
    // Write your code below this line
    
    if (n == 0)
        return 0;
    return (n % 10 + sum_of_digits(n / 10));
    
    // Write your code above this line
}



explain this solution:
sum_of_digits(1234)
  = (1234 % 10) + sum_of_digits(123)
  = 4 + sum_of_digits(123)

sum_of_digits(123)
  = (123 % 10) + sum_of_digits(12)
  = 3 + sum_of_digits(12)

sum_of_digits(12)
  = 2 + sum_of_digits(1)

sum_of_digits(1)
  = 1 + sum_of_digits(0)

sum_of_digits(0)
  = 0      // base case





