#include<iostream>
#include<string>
using namespace std;

//Globle variables and Const
string charForPyramid;
//Variables
size_t stringLength{0};

int main(){
    cout<<"\nEnter the character stream for pyramid: "<<endl;
    getline(cin,charForPyramid);
    stringLength = charForPyramid.length();
    //cout<<endl<<stringLength;
    //this for loop switches rows = number or characters
    for(size_t i {1}; i <= stringLength; i++){
        //space before start
        for(size_t spaceBeforeStart{0}; spaceBeforeStart < stringLength - i; ++spaceBeforeStart){
            cout<<' ';
        }
        //printing string forwards
        for(size_t printForwardIndex {0}; printForwardIndex <= i -1  ; ++printForwardIndex){
            cout<<charForPyramid.at(printForwardIndex);
        }
        //printing string backwards---starting from second row
        if (i >= 2){
            for(size_t printBackwardIndex {i-1}; printBackwardIndex > 0; --printBackwardIndex){
                cout << charForPyramid.at(printBackwardIndex -1);
            }

        }
        cout<<endl;
    }    
    return 0;
}