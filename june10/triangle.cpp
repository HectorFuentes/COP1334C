//triangle.cpp
//May 20, 2015
//Michelle Levine
//This program prompts the user for the base and height of a triangle.  The area 
//of the triangle is then calculated and displayed on the screen.

//pre-processor directives
#include<iostream>
#include<iomanip>
using namespace std;

//define the main function
int main()
{
	//Declare and initialize variables
	float base = 0.0, height = 0.0, area = 0.0;

	//Intro
	cout<<"WELCOME TO THE TRIANGLE CALCULATOR!!\n\n"; 

	

	//Prompt for base
	cout<<"Enter the base of the triangle (cm): ";
	cin>>base;
	cout<<endl; //skip a line of output
	
	//Prompt for height
	cout<<"Enter the height of the triangle (cm): ";
	cin>>height;
	
	//Calculate area
	area = .5 * base * height;

	//Display area
	cout<<fixed<<showpoint<<setprecision(1);
	cout<<"\nTriangle Area:\t"<<area<<" sq. cm"<<endl;
	return 0;
}
