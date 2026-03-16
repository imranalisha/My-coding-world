/* once again welcome to the basic course and here we are gonna learn the the basic
   structure and syntax of c++ language. with the help of comments by using "//" Or 
   the multiple line coment i am gonne let you know all the concepts.
*/

/*before moving furthen lets discuss:
HISTORY AND WHY C++:
  Bjarne Stroustrup created C++ at Bell Labs in 1979 as an extension of the C 
  language to include object-oriented features. It was designed to provide high-level
  abstractions without sacrificing the speed and efficiency of low-level hardware
  manipulation. Today, it remains a gold standard for performance-critical 
  applications like gaming engines, operating systems, and high-frequency trading.
*/

/*
 NOW the structure and syntax of c++:
*/
#include<iostream>     // preprocessor directive and the header file: This tells the compiler to 
                      //include the standard Input/Output stream library.
                     // It allows us to use 'cout' to print text to the screen.

using namespace std; // This saves us from typing 'std::' before every standard library function. 
                     // we have used <iostream> above and we have to take input from user and the system gives output.

 int main(){        // this is the main function, it exist in every program because without this no program can run. 
                   // every program starts from here and when we run any program the compiler first looks for the main
                  // function if it is there then it runs it and whatever is inside it.

 cout<<"hello world"; //"cout": the output statement it prints the text written inside the double quotation marks. 
                      // whatever written inside ("") are printed on the output screen/ console.
                      
 return 0;   //it tells the operating system that the program finished succesfully without crashing. 

 //";": TERMINATOR/ semicolon: last but not the least. ";" this is called terminator it is like full stop in english grammer. 
}