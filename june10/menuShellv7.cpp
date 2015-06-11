//menuShellv8.cpp
//June 10, 2015
//This program demonstrates the concept of a main menu.
//This version uses character letter choices and a switch structure.

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
	switch(menuChoice)
	{
		case 'A':
		case 'a':
		cout<<"These are the rules.\n";
		break;
	
		case 'B':
		case 'b':
		cout<<"This is the game.\n";
		break;
		
	   	case 'C':
	   	case 'c':
	   	cout<<"Have a nice day!\n";
		break;
		
		default:
		cout<<"Invalid.  You must choose A - C from the menu.\n";
	}
	}
	while(menuChoice != 'C' && menuChoice != 'c');
 return 0;
}
