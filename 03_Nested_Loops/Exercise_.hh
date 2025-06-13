#include<iostream>
#include<vector>
using namespace std;
//global variables and constants
const vector<int>pairMaker{1,2,3,4,5,6};
void sumOfAllPairs(){
    int result{0};
    //a vector with x elements
    int k_noOfElements = pairMaker.size();
    //setting i as first element of vector
    for(int i{0};i<k_noOfElements;i++){
        bool firstInRow = true;
        //setting j as second element of vector
        for(int j=i+1;j<k_noOfElements;j++){
            result+=pairMaker.at(i)*pairMaker.at(j);
            //if condition for putting comma after every pair but not first
            if(!firstInRow){
                cout<<",";
            }
            //the comma is printed before the pain and not after so >>no comma AFTER last element
            cout<<"("<<pairMaker.at(i)<<","<<pairMaker.at(j)<<")";
            firstInRow = false;
        }
        //change row
        cout<<endl;
    }
    cout<<result<<endl;
    
}