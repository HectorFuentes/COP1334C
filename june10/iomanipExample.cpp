//iomanipExample.cpp
//May 27, 2015
//This program demonstrates the concept of the string data type.

#include<iostream> //needed for cin/cout
#include<iomanip>  //needed for setw and setprecision
#include<string>	 //needed to use string data type
using namespace std;

int main()
{
	//declare and initialize variables
	string name1, name2; //strings do not need to be initialized
	float balance1 = 0.0, balance2 = 0.0;
	int age1 = 0, age2 = 0;
	
	//Intro
	cout<<"WELCOME TO THE STRING PRACTICE PROGRAM!!\n\n";
	
	//prompt for name1 and balance1
	cout<<"Enter name 1: ";
	getline(cin, name1); //getline is the command used for strings with whitespace
	cout<<"Enter balance 1: $";
	cin>>balance1;
	cout<<"Enter age 1: ";
	cin>>age1;
	cin.ignore(1,'\n'); //ignore is needed between any cin and getline command
	//prompt for name2 and balance2
	cout<<"Enter name 2: ";
	getline(cin, name2);
	cout<<"Enter balance 2: $";
	cin>>balance2;
	cout<<"Enter age 2: ";
	cin>>age2;
	
	//display results
	cout<<"\n";
	cout<<left<<setw(20)<<"Name"<<left<<setw(10)<<"Age"<<setw(10)<<"Balance"<<"\n";
	cout<<"------------------------------------------\n";
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<left<<setw(20)<<name1<<left<<setw(10)<<age1<<"$"<<balance1<<endl;
	cout<<left<<setw(20)<<name2<<left<<setw(10)<<age2<<"$"<<balance2<<endl;

 return 0;
}
