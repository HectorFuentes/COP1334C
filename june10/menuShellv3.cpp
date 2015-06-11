//menuShellv3.cpp
//June 10, 2015
//This program demonstrates the concept of a main menu.
//This version uses character letter choices and a multi-way if structure for the menu.
//This version uses an or statement for the conditions.
#include<iostream>
using namespace std;

int main()
{	char menuChoice = ' ';

	do
	{
	//display menu
	cout<<"Please choose from the following menu:\n";
	cout<<"A) See Rules\nB) Play Game\nC) Exit\n";
	cout<<"Enter your choice here: ";
	cin>>menuChoice;
	
	if(menuChoice == 'A' || menuChoice == 'a')
	{
		cout<<"These are the rules.\n";
	}
	
	else if(menuChoice == 'B'|| menuChoice == 'b')
	{
		cout<<"This is the game.\n";
	}
	else if(menuChoice == 'C' || menuChoice == 'c')
	{
		cout<<"Have a nice day!\n";
	}
	else
	{
		cout<<"Invalid.  You must choose A - C from the menu.\n";
	}
	}
	while(menuChoice != 'C' && menuChoice != 'c');
 return 0;
}
