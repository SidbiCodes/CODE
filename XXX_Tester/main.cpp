#include "Test_Functions.hh"
//global var/const
const int aRR [5] {2,3,4,5,6};
size_t size = sizeof(aRR)/sizeof(aRR[0]);
int main (){
    int testPtrVal {5};
    int *testPtr {nullptr};
    testPtr = &testPtrVal;
    cout << "Value of testPtrVal: " << testPtrVal << endl;  
    cout << "Value of testPtr: " << testPtr << endl;
    cout<<"The value of address of testPtrVal using &: "<<&testPtrVal<<endl;
    cout << "Value pointed to by testPtr: " << *testPtr << endl;            

    return 0;
}