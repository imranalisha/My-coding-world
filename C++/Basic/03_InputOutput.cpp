#include <iostream>
using namespace std;
int main(){
    string name;
    //---COUT AND CIN---
    /*COUT>>: by using 'cout<<' we print message for the user on console "enter you name:" 
     CIN>> : By using 'cin>>' we ask user to enter data and the data wheather its an interger or a string or 
     any kind of data that will be stored in the variable like in our case it is name and when the user enters
     the name it will store in the varibale named name.
    */
    cout<<"enter you name: ";
    cin>> name;
     //---ESCAPE SEQUENCE---
     /*
     In C++, an escape sequence is a sequence of characters that starts with a backslash (\) and is 
     used within character or string literals to represent special characters. It is used for speacific task
     like \n is used for new line.
     e.g: 
     \n : New Line

\t : Horizontal Tab

\\ : Backslash

\" : Double Quote

\' : Single Quote

\a : Alert / Bell

\b : Backspace

\r : Carriage Return

\0 : Null Character
     */
    cout<<"my name is \timran \\ali. i am a \"student\" and today \a we are   \blearning about escape sequences in c++.";

    return 0;
}