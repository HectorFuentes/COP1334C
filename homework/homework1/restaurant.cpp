//schedule.cpp
//May 27, 2015
//Hector Fuentes
//This program displays the following schedule.

//pre-processor directives
#include<iostream>
#include<iomanip>
using namespace std;

//define the main function
int main()
{
	//Declare and initialize variables
	float mealCost = 0.0, tax = 0.0, tip = 0.0, totalCost 		= 0.0;

	//Intro 
	cout<<"WELCOME TO BROWARD CAFE!!\n\n";

	//Prompt the user for the meal cost

	cout<<"Meal Cost:\t";
	cin>>mealCost;

	// Calculate tip tax and total

	tax = mealCost * .20;
	tip = mealCost * .07;
	totalCost = mealCost + tax + tip;

	//Display area
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"\nMeal Cost:\t"<<'$'<<mealCost;
	cout<<"\nTax:\t\t"<<'$'<<tax;
	cout<<"\nTip\t\t"<<'$'<<tip;
	cout<<"\nTotal Cost:\t"<<'$'<<totalCost<<endl;
	return 0;

}
	
