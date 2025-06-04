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

