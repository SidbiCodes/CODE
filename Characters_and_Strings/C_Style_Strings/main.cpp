#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

//Constanbt and global variables 


int main (){

     //declaring strings without initialization : README.txt for more info

     char first_name [20]{0};
     char last_name [20]{0};
     char full_name [50]{0};
     char temp [50]{0};
     //check array value without initialization = garbage value whatever is the the location
     //check with initialization = \0 (null terminater) is the first characters in the string therefore the string terminates with no output
     cout<<first_name<<endl;
     //output: garbnage value till null character occurs
     cout<<"Enter first name: \n";
     cin>>first_name;
     cout<<"Enter last name: \n";
     cin>>last_name;

     //strlen() function itirates through the array and counts the number of characters found until \0.
     //strlen function returns a size_t type
    /*______________________________________________________

    //size_t: size_t is an unsigned integer type defined in C and C++ to represent the size of objects in memory, typically used for array indexing, loop counters, and functions like sizeof and strlen. 
     It is returned by functions that deal with sizes because it can safely represent the maximum possible size of any object on a given system. Since it is platform-dependent (32-bit on 32-bit systems, 64-bit on 64-bit systems), 
     using size_t ensures portability and avoids overflow or signed/unsigned comparison issues when dealing with memory sizes or indexes.
     ______________________________________________________*/

     cout<<first_name<<" has characters: "<<strlen(first_name)<<" "<<last_name<<" has characters: "<< strlen(last_name)<< endl;
     //strcpy = string copy. Coply the right argument to the left side string.
     strcpy(full_name,first_name);//First name is copied to full name
     strcat(full_name," ");// a character as space is concatinated / added to the string full_name after first_name
     strcat(full_name,last_name);// last name concatinated after space
     cout<<" your full name is : "<<full_name<<endl;

     //Test 2) if you enter a name is string with a space, the string would terminate on the space. SPACE = \0
     cout<<"Enter full name with space and check the behaviour"<<endl;
     cin >> full_name;
     cout<<full_name<<endl;//only siddhartha  is orinted as " " = \0
     //Test 2) if you enter a name is string with a space, with getline function
     cout<<"Enter full name with space and check the behaviour"<<endl;
     cin.getline(full_name,50);
     cout<<full_name<<endl;//only siddhartha  is orinted as " " = \0
     //due to the previous cin without getline: the characters after space which were ignored (lastname) are saved in the buffer and on next
     //cin.getline the first name before space is overwritten from the buffer with the last name and the next cin is saved in the buffer.
     //to avoid this we must clear the buffer:
     cout<<"Press ENTER to clear the buffer"<<endl;
     cin.ignore(1000,'\n');//clearnig buffer till 1000 char
     cout<<"Enter full name with space and check the behaviour"<<endl;
     cin.getline(full_name,50);
     cout<<full_name<<endl;





    







    return 0;
}