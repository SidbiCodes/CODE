#include<iostream>
#include<vector>
using namespace std;

int main(){

    //Local variable definations
    char choice {};
    vector<int>numberList{};
    do{
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
        if(choice == 'P'||choice=='p'){
            if(numberList.empty()){
                cout<<"[] - the list is empty"<<endl;
                cout<<endl;
            }else{
                cout<<"[ ";
                for(auto Val:numberList){
                    cout<<Val<<" ";
                }
                cout<<"]"<<endl;
                cout<<endl;
            }
        }else if(choice == 'A'||choice=='a'){
            cout<<"Add an integer to the number list: ";
            int pushBackVal {0};
            cin>>pushBackVal;
            numberList.push_back(pushBackVal);
            cout<<"\n"<<pushBackVal<<" added.\n";
        }else if(choice == 'M'||choice=='m'){
            if(numberList.empty()){
                cout<<"Unable to calculate the mean - no data"<<endl;
                cout<<endl;
            }else{
                double mean {0};
                int Sum{0};
                for(auto Val:numberList){
                    Sum+=Val;
                }
                mean = static_cast<double>(Sum)/numberList.size();
                cout<<"Mean of the available list is: "<<mean<<endl;
                cout<<endl;
            }            
        }else if(choice == 'S'||choice=='s'){
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
        }else if(choice == 'L'||choice=='L'){
            if(numberList.empty()){
                cout<<"Unable to determine the smallest number - list is empty. \n";
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
        }else if(choice == 'Q'||choice=='q'){
            cout<<"Goodbye"<<endl;
            cout<<endl;

        }else{
            cout<<"Unknown selection, please try again"<<endl;
            cout<<"endl";
        }
    }while(choice !='Q' && choice != 'q');

    return 0;
}