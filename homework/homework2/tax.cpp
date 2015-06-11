//Hector Fuentes
//6/3/2015
//taxalg.txt
//This program prompts for tha actural value of a piece property.Then it displays the assessment value and property tax.

//pre-processor directives
#include<iostream>
#include<iomanip>
using namespace std;


//define the main function
int main()
{

	//Declare and initialize variables
	float actValue = 0.0, assValue = 0.0, proTax = 0.0; 	
	const float  assTax = .60, Tax = .0064;

	//Intro
	cout<<"WELCOME TO THE PROPERTY TAX 		ASSESSMENT PROGRAM!!\n\n";



	//Prompt for actual value
	cout<<"Enter the property 		value:	\t	$";
	cin>>actValue;



	//Calculate assment value
	assValue = actValue * assTax;

	//Calculate property tax

	proTax = assValue * Tax;



	//Display
	
	cout<<fixed<<showpoint<<setprecision(2);

	cout<<"\n**********************************\n"<<"Assessment Value:\t$"<<assValue<<" \nProperty Tax:\t\t$"<<proTax<<endl;

	return 0;
}
