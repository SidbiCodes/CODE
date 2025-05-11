#include<iostream>
#include<vector>
using namespace std;
const vector<int>vec{1,5,10,50,44,89};
void greatestOfElements(){
    int greatestElement {vec.at(0)};
    for(size_t i{1};i<vec.size();i++){//compares all the elements one by one
        if(vec.at(i)>greatestElement){
            greatestElement = vec.at(i);
        }
    }
    cout<<"\n"<<greatestElement<<endl;
}
