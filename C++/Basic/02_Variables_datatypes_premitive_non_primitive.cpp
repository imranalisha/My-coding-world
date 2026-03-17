#include<iostream>
using namespace std;
int main(){

    string name ="imran ali";  

/* HERE: 
    1. --DATAYPE: "STRING--
    A value as " imran is " declared above and its type is string for words like "imran","hellp","apple" etc
    we use its type as string.
    there are multiple datatypes in c++.
    --PRIMITIVE DATATYPES
    1. string:  size(depend on variable and number of character it contains) dicussed above. ---> it is a 
       non-premitive datatype but important to learn now.
    2. int:size(4bytes)it stores integer values as string stores text bases e.g 343, 5,6 etc
    3. float and double:   size(4byte)(8byte) stores decimal values like: 2.3,.4.6,7.8 etc but double is used for
    4. boolean:size(1byte) it is used when we need to know wheather true or false like true '1', false '0'.
    5. character/char:  size(1byte) use to store alhabets/ character e.g a, A, c etc.
    6 USER DEFINED: user like you and me can also create our own data type for our own ease. we will understand 
    it with passage of time while learning.
    --NON-PRIMITIVE DATATYPES: these are a little advance, we will LEARN them in advance part. these include arrays,
    pointers etc.



    2. --VARIABLE--
    variable:Think of a variable as a labeled storage box inside your computer's RAM (memory).
    When you create a variable, you are telling the computer: "Hey, set aside a little bit of 
    memory, put a label on it so I can find it later, and only let a specific type of data go 
    inside it.
     exampel from the code: "name" is a variable, and its value as "imran ali"

    3. OPERATOR:"=" We will dicuss later.
    
    */
   cout<<"NAME="<<name;

   cout<<"\nname's size="<<sizeof(name); // sizeof() function: it check the size string object.
   cout<<"\nname's size="<<name.size();   //it give the size depending on the number of characters in the string.

    return 0;
}