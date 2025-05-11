#include<iostream>
#include<vector>
using namespace std;


//global variable and constants
void histogramMaker (){

int numberOfItems {0};
vector<int>Data{};
cout<<"Enter the number of items: ";
cin>>numberOfItems;
for(int x {1};x<=numberOfItems;x++){
    int val{0};
    cout<<"Enter value number "<<x<<" :"<<endl;
    cin>>val;
    Data.push_back(val);
}
for(auto Data_vec: Data){
    cout<<Data_vec<<endl;
}

cout<<endl;

//size of vector: numberOfItems (this will give rows)
//no of columns are = value of vector at each row
cout<<"This Histogram outputs the stars = value for each vector element entered"<<endl;
for(int i {0};i<numberOfItems;i++){
    for(int j {0};j<Data.at(i);j++){
        cout<<"*";
    }
    cout<<endl;
}


}

