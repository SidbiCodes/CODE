What is a pointer?
- Pointer is a variable that stores the address of anorher variable/function which holds a datatype and a value.
    - pointer also has a datatype and the value stored is a variable address
Why do we use pointers and when?
- Sometimes to access data  which is out of the local scopr of the function, we use referances or pointers.
- pointers can be used to operate on Arrays very efficiently.
We can allocate memory dynamically to the heap or free space. This memory doesnt have a variable name and can only be accessed by pointers.
Application: embedded systems.

1) Declaring a pointer variable:
     variable_type *pointer_name;// Only declaration will have garbage data in the pointer.
2) Initialization:
     variable_type *pointer_name {nullptr};//nullptr= pointing no where and is different from pointing anywhere
     //always initialize a pointer as uninitialized pointer can point to ranom memory addresses and can be dangerous.

Accessing a pointer address and assigning address to pointer for another variable.
"&" is the address operator--- used left to the opperand and refers to the address of the opperand.
# Operand cannot be a constant and an expression which evaluates to a temp value.
# sizeof: this operator tells the size of the memory needed for the variable or pointer in bytes.
sizeof a pointer is different from what it points to. It can point to a very large memo but all pointers are of same size.


3)referencing a pointer.

int score = 1000;
int *_score = {nullptr};
//Referencing a variables address to a pointer.
_score = &score;// _score points to the address of score.

cout<<score;
cout<<&score;//this value is stored in _score
cout<<_score;

4)Dereferencing a pointer:
we use the same * to dereference a pointer to get the "value" and not the address it is pointing to.

cout<< *_score; // this would give a 1000

we can also use it to change the value stored in the address to which pointer is pointing.

*_score = 200;

cout<< score; // this is 200 now and not 1000.


Dereferencing can be done with to iterate through a vector too. Make a vector pointer of the reqiored datatype abd use *_vectorPointer.at(i)


5) Dynamic memory allocation:




