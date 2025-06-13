C++ style strings
Library: #include <string>
std namespace;
-conteguous in memory
- dynamic size | not like c strings which are fixed in size (array like)
-work with input and output string
- operators can be used [+, -, *, comparisons, equilizers etc]  | cstyle strings dont weork well with some operators
- can be easily converted tzo c style string if needed
_____________________________________________

declaration and initialization
string s1; // normally initialized as empty #cpp strings are always initialized therefore no garbage value

string s2 {"Frank"}; // Frank
string s3 {s2}; //Frank #string to string initializetion
string s4 {"Frank",3} // Fra ------ ()"string",no of char to be considered)
string s5 {s3,0,2} // Fr {String,staring index,length}
string s6 {3,'X'}// XXX    It creates a string with 3 copies of the character 'X'.

_____________________________________________

we can assigne values to string with assignment oprator unike strcpy().
 si = "abced"; should work

 Concatination (+)
s1 = s2 + " " + s3 + " " + "something"
stringInS2 stringIns3 something

REMEMBER: two consecutive string litrals can not be added or compound concatinated. You will have to use strcat();
// some operations
1) Extractrion a sting from a substring
string s1 = "This is a test";
cout<<s1.substr(0,4);
output: This 
syntax: substr(index, no of char)

2) How to find for a specific string:

syntax:     StringObj.find("string"); // this would return the starting index of the string

syntax:     StrObject.find("string",index) // starts the search from the index mentioned and returns the index when the string is found

syntax:     StrObj.find('e') // returns the index of the occurance of the constructer

if there is no string found ; the the find() would return string::npos ------------- this can be used for an if wlsw conditiopn to find the word in a sentence

s1.rfind() // this would start ifinding the string from reverse


3) erase() and clear()

//to erase startig from a specific index
syntax: s1.erase(index, no of characters)

//to clear the entire string 
syntaxc: s1.clear()

4).length()

gives the string length 

string s1 = {"Frank"};
s1.length(); // 5

5)compund Concatination

s1 += " James"
cout s1;
output: StringatS1 James
    5.1) .insert (index,constructor or char or space or whatever)
    formatted_full_name.insert(7, " ");

6) getline() 
used for input streams
string s1;
cin>>s1;

hello there

s1: hello // there is skipped as the cin will stop when it sees a white space or \n.

to avoid tis we use getline.

string s1;
getline(cin,s1); // this would take the entire sentence

syntax 2: getline(cin,s1,'x')// would take the input till the user presses X

_____________________________________________

