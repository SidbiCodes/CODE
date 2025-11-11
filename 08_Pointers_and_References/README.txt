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
     -> Accessing a pointer address and assigning address to pointer for another variable
     The & operator is called the address-of operator.

Example:
You cannot use & on a constant or a temporary value (like &5 or &(a + b)).

# sizeof: this operator tells the size of the memory needed for the variable or pointer in bytes.
sizeof a pointer is different from what it points to. It can point to a very large memo but all pointers are of same size.


3)referencing a pointer.

int score = 1000;
int *_score = {nullptr};
//Referencing a variables address to a pointer.
_score = &score;// _score points to the address of score.

cout<<score;
cout<<&score;//this value(address) is stored in _score-> i.e. address of score and not integer stored inside score,
cout<<_score;

4)Dereferencing a pointer:
we use the same * to dereference a pointer to get the "value" and not the address it is pointing to.

cout<< *_score; // this would give a 1000

we can also use it to change the value stored in the address to which pointer is pointing.

*_score = 200;

cout<< score; // this is 200 now and not 1000.


Dereferencing can be done with to iterate through a vector too. Make a vector pointer of the reqiored datatype abd use *_vectorPointer.at(i)


5) Dynamic memory allocation:
Purpose: Helpful when data size is unknown and must be allocated dynamically.
We can allocate storage at runtime.
- We access heap storage through pointers.
 
 Synrax:

 int *int_ptr {null_ptr}; // declaring a pointer

 //now we reference the pointer to "new" int in heap instead of "&" referanca to other variable address.
 int_ptr = new int // allocating an integer to the heap memo by int_ptr pointer.
 cout<< int_ptr; //this gives the address of the allocated space on heap
 cout<<*int_ptr// will display garbage value stored in the heap. 
 *int_ptr = 100;
 cout<<*int_ptr//  this gives 100

 //  Deallocating the memory on the heap

 delete int_ptr; // this deallocates the heap memory which was accessed by the pointer

 //imp: MEMORY LEAKING

 do not assign the pointer pointing to heap memo to any other var before deallocating it [delet ptr;]
 this might lead to used storage in heap that is not accessable anymore.
 - the storage on heap is just of a datatype and has no name
 - the only way to get to the data is by pointer, so deallocate the memo then reuse the pointer.

 similarly with array:

int *ptr_array {null_ptr};
int size {0};
cin>>size;
ptr_array = new int [size]; //now the ptr_array pointer is pointing to the address of the first element of the array.
delete [] ptr_array; //deallocating the pointer from the dynymic array in the heap storage.

Note:
delete / delete []  frees up the dynamic memo on the heap accessed by the pointer.

6)Relation between Pointers and Arrays:
     value of arr name -> address of first element of array
     val of pointer var -> is an address
     if pointer points to the same datatype as the arr elements -> pointer and arr name can be used interchangably.

     what it means?
      int arrTest[]{1,2,3,4,5}; -> array
      cout>>arrTest;->address of the first element of the array
      cout>>(arrTest +1);->second element address
      cout>>*(arrTest+1);->second element this is same as | cout>>arrTest[1];

      so, if array can be deallocated like pointer then is array a pointer and can pointer output like array?
      ->yes, array behaves like a pointer and a pointer can behave like array in terms of syntax.

      int *arrPointer {arrTest}; -> initialized the array pointer to array name (first element address of array)
      cout>>arrPointer;->1st element address
      cout>>*arrPointer; | cout>>arrPointer[0]; -> first element
      cout>>(arrPointer+1);->second element address
      cout>>*(arrPointer+1);->second element

      in short, array and pointers can work with same syntax format if You
      initialize the pointer array to arrays first element address (with array name).

      Note: There is no array pointer, pointer can only be one dimentional and of a datatype.

      







