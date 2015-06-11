//appendExample.cpp
//May 27, 2015
//This program demonstrates the concept of appending a text file.

#include<iostream> //needed for cin/cout
#include<iomanip>  //needed for setw and setprecision
#include<string>	 //needed to use string data type
#include<fstream>  //needed for reading/writing files
using namespace std;

int main()
{
	//declare and initialize variables
	string name1; //strings do not need to be initialized
	float balance1 = 0.0;
	int age1 = 0;
	
	//declare a file pointer for output
	ofstream outfile;
	
	//Intro
	cout<<"WELCOME TO THE FILE WRITING PRACTICE PROGRAM!!\n\n";
	
	//prompt for name1 and balance1
	cout<<"Enter name 1: ";
	cin>>name1; //prompt for strings with no whitespace
	cout<<"Enter balance 1: $";
	cin>>balance1;
	cout<<"Enter age 1: ";
	cin>>age1;
	
	
	
	//write the raw data to a file
	
	//open "studentdata.txt" for writing
	outfile.open("studentdata.txt", ios::app); //app will create the file if it does not yet exist and will
								//append the data in the file if it does exist
	
	outfile<<name1<<"\t"<<age1<<"\t"<<balance1<<endl;
	
	
	//close file
	outfile.close();

 return 0;
}
