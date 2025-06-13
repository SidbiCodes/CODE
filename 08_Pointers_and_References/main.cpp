#include<iostream>
using namespace std;

int main(){
    int num {0};
    cout<<num<<" "<<sizeof num<<endl;
    //declaring and initialiting a pointer of type int
    int *ptr_num {nullptr};
    cout<<ptr_num<<endl;
    //referencing a pointer to a variable of same datatype
    ptr_num = &num;
    cout<<ptr_num<<" "<<sizeof ptr_num<<endl;
    //dereferencing a pointer and assigning a value to it.
    *ptr_num = 100;
    cout<<num<<" "<<sizeof num<<endl;
    return 0;
}