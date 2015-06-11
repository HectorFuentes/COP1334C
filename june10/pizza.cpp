/*pizza.cpp
Michelle Levine
May 20, 2015
This program prompts the user for some information about a pizza.
The slice area and cost are calculated and displayed.
*/

//preprocessor directives
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//Declare and initialize variables and constants
	float radius = 0.0, pizzaCost = 0.0, pizzaArea = 0.0, sliceCost = 0.0, sliceArea = 0.0;
	int numSlices = 0;

	const float PI = 3.14;

	//Intro
	cout<<"WELCOME TO THE BROWARD PIZZERIA!!\n\n";
	
	//Prompt for radius
	cout<<"Enter the radius of the pizza(in): ";
	cin>>radius;
	
	//Prompt for pizzaCost
	cout<<"\nEnter the total cost of the pizza : $";
	cin>>pizzaCost;
	
	//Prompt for numSlices
	cout<<"\nEnter the number of slices in the pizza: ";
	cin>>numSlices;
	
	//Calculate pizzaArea
	pizzaArea = PI * radius * radius;

	//Calculate sliceArea
	sliceArea = pizzaArea / numSlices;

	//Calculate sliceCost
	sliceCost = pizzaCost / numSlices;

	//Display sliceArea and sliceCost
	cout<<"************************************\n";
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"\nArea of a single slice of pizza:\t"<<sliceArea<<" sq. in.\n";
	cout<<"Cost of a single slice of pizza:\t$"<<sliceCost<<endl;
return 0;
}
