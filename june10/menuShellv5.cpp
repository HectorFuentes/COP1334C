//menuShellv5.cpp
//June 10, 2015
//This program demonstrates the concept of a main menu.
//This version uses integer choices and a switch structure.
//A switch structure replaces a multi-way if structure

#include<iostream>
using namespace std;

int main()
{	int menuChoice = 0;

	do
	{//begin main menu do...while loop 
	//display menu
	cout<<"Please choose from the following menu:\n";
	cout<<"1) See Rules\n2) Play Game\n3) Exit\n";
	cout<<"Enter your choice here: ";
	cin>>menuChoice;
	
	switch(menuChoice)
		{ //begins switch 
		case 1:
		cout<<"These are the rules.\n";
		break;
	
		case 2:	
		cout<<"This is the game.\n";
		break;
	
		case 3: 
		cout<<"Have a nice day!\n";
		break;
	
		default:
		cout<<"Invalid.  You must choose 1 - 3 from the menu.\n";
		
		}//ends switch
	}//ends do while loop
	while(menuChoice != 3);
 return 0;
}
