//myfirstprogram.cpp
//May 13, 2015
//Michelle Levine
//This program demonstrates some simple output.
//Comments are notes that are ignored by the compiler.

/*this
is a 
multiline comment
*/

//preprocessor directive - these are used to tell the compiler which library files are needed for this program.
//These are needed in EVERY program you write
#include<iostream>
using namespace std;

//main function

int main()
{
   	cout<<"Hello world!!"<<endl;
	cout<<"Good bye\n";
	cout<<"homework\\homework1"<<endl;
	
	//demonstrate tabs and newlines
	cout<<"Name\t\tGPA\n";
	cout<<"-------------\n";
	cout<<"John Smith\t3.4\n";
	
   return 0;
}
