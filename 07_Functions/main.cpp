#include "Sub_Functions.hh"

int main(){
    char choice{0};
    vector<int>numberList{};    
    do{
        displayMenu(choice);
        if(choice == 'P'||choice=='p'){

        }else if(choice == 'A'||choice=='a'){

        }else if(choice == 'M'||choice=='m'){

        }else if(choice == 'S'||choice=='s'){
  
        }else if(choice == 'L'||choice=='l'){
 
        }else if(choice == 'Q'||choice=='q'){

        }else{
            cout<<"Unknown selection, please try again"<<endl;
            cout<<"endl";
        }

    }while(choice !='Q' && choice != 'q');

    return 0;
}
