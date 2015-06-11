//menuShellv2.cpp
//June 10, 2015
//This program demonstrates the concept of a main menu.
//This version uses character number choices and a multi-way if structure for the menu.
#include<iostream>
using namespace std;

int main()
{	char menuChoice = ' ';

	do
	{
	//display menu
	cout<<"Please choose from the following menu:\n";
	cout<<"1) See Rules\n2) Play Game\n3) Exit\n";
	cout<<"Enter your choice here: ";
	cin>>menuChoice;
	
	if(menuChoice == '1')
	{
		cout<<"These are the rules.\n";
	}
	
	else if(menuChoice == '2')
	{
		cout<<"This is the game.\n";
	}
	else if(menuChoice == '3')
	{
		cout<<"Have a nice day!\n";
	}
	else
	{
		cout<<"Invalid.  You must choose 1 - 3 from the menu.\n";
	}
	}
	while(menuChoice != '3');
 return 0;
}
