//autov2.cpp
//June 3, 2015
//This program prompts the user for age and marital status.  From that info, the auto insurance rate is then calculated.
//This version uses a multi-way if structure.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//Declare and initialize variables
	int age = 0, maritalStatus = 0;
	float rate = 0.0;

	//Intro
	cout<<"WELCOME TO THE AUTO INSURANCE CALCULATOR!!\n\n";
	
	do
	{
	//Prompt for age
	cout<<"Enter your age: ";
	cin>>age;
	//input validation
	if (age < 16)
		{
   		//display invalid
   		cout<<"Invalid.  Age must be at least 16.\n\n";
		}
	}
	while(age < 16); //DON'T FORGET YOUR SEMI-COLON HERE!!
	
	
	do
	{
	//Show menu for marital status
	cout<<"\nPlease choose your marital status from the following menu:\n";
	cout<<"1) Married\n2) Single\n";

	//Prompt for maritalStatus
	cout<<"Enter your choice here: ";
	cin>>maritalStatus;
	
	//input validation
	if (maritalStatus < 1 or maritalStatus > 2)
    		{
    		//display invalid
		cout<<"Invalid.  You must choose either 1 or 2 from the menu.\n\n";
		}
	}
	while (maritalStatus < 1 or maritalStatus > 2);


	//multi-way if structure to calculate rate
	if (maritalStatus == 1 && age < 25) //NO SEMI-COLON HERE!!!
		{
		 	rate = 700;
		}
	else if (maritalStatus == 1 && age >= 25)
	    	{
		  	rate = 450; 
		}
	    
	else if (maritalStatus == 2 && age < 25)
		{
		 	rate = 800;
		}
	else
	    	{
		  	rate = 500; 
		}
	

	//Display rate
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"\nYour rate = $"<<rate<<endl;


return 0;
}
