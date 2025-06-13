#include <iostream>
using namespace std;


void TestDefaultParameters (int a = 1, int b = 2,  int c =3){

    cout<<a<<b<<c<<endl;
    cin>>a;
    cout<<a<<b<<c<<endl;
    cin>>a>>b;
    cout<<a<<b<<c<<endl;

}