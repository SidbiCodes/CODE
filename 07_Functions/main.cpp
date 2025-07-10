#include "Sub_Functions.hh"

int main(){
    char choice{0};
    vector<int>numberList{};    
    do{
        displayMenu(choice);
        if(choice == 'P'||choice=='p'){
            printTheNumList(numberList);
        }else if(choice == 'A'||choice=='a'){
            addNumToList(numberList);
        }else if(choice == 'M'||choice=='m'){
            calcMean(numberList);
        }else if(choice == 'S'||choice=='s'){
            smallestNumber(numberList);  
        }else if(choice == 'L'||choice=='l'){
            largestNumber(numberList);
        }else if(choice == 'Q'||choice=='q'){
            goodBye();
        }else{
            cout<<"Unknown selection, please try again"<<endl;
            cout<<"endl";
        }
    }while(choice !='Q' && choice != 'q');
    return 0;
}
