//readExample.cpp
//May 27, 2015
//This program demonstrates the concept of reading from a text file.

#include<iostream> //needed for cin/cout
#include<iomanip>  //needed for setw and setprecision
#include<string>	 //needed to use string data type
#include<fstream>  //needed for reading/writing files
using namespace std;

int main()
{
	//declare and initialize variables
	string name1, name2; //strings do not need to be initialized
	float balance1 = 0.0, balance2 = 0.0;
	int age1 = 0, age2 = 0;
	
	//declare a file pointer for input
	ifstream infile;
	
	//Intro
	cout<<"WELCOME TO THE FILE READING PRACTICE PROGRAM!!\n\n";
	
		
	//open "studentdata.txt" for reading
	infile.open("studentdata.txt", ios::in); //in reads from the beginning of the file
	
	//check to see if the file exists
	if(!infile)
		{
			cout<<"File does not exist!\n";
		}
		
	//read in data line by line
	infile>>name1>>age1>>balance1;
	infile>>name2>>age2>>balance2;
	
	//close file
	infile.close();
	
	//display data on screen to make sure it read incorrectly
	//display results
	cout<<"\nName\tAge\tBalance\n";
	cout<<"-----------------------\n";
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<name1<<"\t"<<age1<<"\t$"<<balance1<<endl;
	cout<<name2<<"\t"<<age2<<"\t$"<<balance2<<endl;

 return 0;
}
