#include<iostream>
#include<vector>
using namespace std;

//Function Prototypes
void displayMenu(char &choice);
void printTheNumList(const vector<int> &numberList);
void addNumToList(vector<int> &numberList);
void calcMean(const vector<int> &numberList);
void largestNumber(const vector<int> &numberList);
void smallestNumber(const vector<int> &numberList);
void goodBye();
//Function Definition
void displayMenu(char &choice){
    cout<<"P - Print numbers"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean of the numbers"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"Q - Quit"<<endl;
    cout<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    cout<<endl;
}
void printTheNumList(const vector<int> &numberList){    
    if(numberList.empty()){
        cout<<"[nothing] - the list is empty"<<endl;
        cout<<endl;
    }else{
        cout<<"[ ";
        for(auto Val:numberList){
            cout<<Val<<" ";
        }
        cout<<"]"<<endl;
        cout<<endl;
    }

}
void addNumToList(vector<int> &numberList){
    int num{0};
    cout<<"Add an integer to the number list: ";
    cin>>num;
    numberList.push_back(num);
    cout<<"\n"<<num<<" added.\n";
}
void calcMean(const vector<int> &numberList){

    if(numberList.empty()){
        cout<<"Unable to calculate the mean - no data"<<endl;
        cout<<endl;
    }else{ 
        int Sum{0};
        for(auto Val:numberList){
            Sum+=Val;
            }
        mean = static_cast<double>(Sum)/numberList.size();
        cout<<"Mean of the available list is: "<<mean<<endl;
        cout<<endl;

    }
}
void largestNumber(const vector<int> &numberList){
    if(numberList.empty()){
        cout<<"Unable to determine the Largest number - list is empty. \n";
        cout<<endl;
    }else{
        int largestNumber {0};
        for(size_t i {0};i<numberList.size();i++){
            for(size_t j=i+1;j<numberList.size();j++){
                if(numberList.at(i)>numberList.at(j)){
                    largestNumber = numberList.at(i);
                }
            }
        }
        cout<<"The Largest number is "<<largestNumber<<endl;
        cout<<endl;
    }
}
void smallestNumber(const vector<int> &numberList){
    if(numberList.empty()){
        cout<<"Unable to determine the smallest number - list is empty. \n";
        cout<<endl;
    }else{
        int smallestNumber {0};
        for(size_t i {0};i<numberList.size();i++){
            for(size_t j=i+1;j<numberList.size();j++){
                if(numberList.at(i)<numberList.at(j)){
                    smallestNumber = numberList.at(i);
                }
            }
        }
        cout<<"The smallest number is "<<smallestNumber<<endl;
        cout<<endl;
    }
}
void goodBye(){
    cout<<"Goodbye"<<endl;
    cout<<endl;
}