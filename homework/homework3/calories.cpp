//Hector Fuentes 
//June 6 2015
//calories.cpp
//Prompt for users weight , gender and activity level. 

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//Declare and initialize variables
	int weight = 0, gender = 0, activityLevel = 0, calories = 0, caloriesNeed = 0;
	const int maleModerate = 0, maleLow = 0, femaleModerate = 0, femaleLow = 0;

	//Intro
	cout<<"Welcome to the Calorie Calculator!!\n\n";
	
	//prompt for users weight
	do{
		cout<<"Please enter weight\n";
		cin>>weight;
		//input validation
		if (weight < 10){
   			//display invalid
   			cout<<"Invalid.  Weight must be at least 10.\n\n";
		}
	}while(weight < 10);

	//display menu 

	do{	
		//Show menu for Activity Level:

		cout<<"1) Moderately Active:\n";
		cout<<"2) Low Activity level:\n";
		//prompt for Activity Level
		cin>>activityLevel;

		//input validation
		if ( (activityLevel < 1) or (activityLevel > 2))
		//display invalid
		cout<<"Invalid.  Weight must be at least 10.\n\n";
	}while (activityLevel < 1 or activityLevel > 2);
	
	do{
		//Show menu for Gender
		cout<<"1) Male:\n2) Female:\n";
		cin>>gender;

		//prompt for gender
		//input validation
		if (gender < 1 or gender > 2)
			//display invalid
		cout<<"Invalid.  Weight must be at least 10.\n\n";
		
	}while (gender < 1 or gender > 2);

	if (activityLevel == 1){
		if (gender == 1){
			calories = 15;
		}
    		else{
		  	calories = 12;
		}
    	}
	else{
		if (activityLevel == 2 and gender == 1){
	 	 calories = 13;
		}
		else{
	  	 calories = 10;
		}
	}
	//Calculate the calories needed
	caloriesNeed = calories * weight;

	//display caloriesNeed 

	cout<<"\nYour Calories Needed are:"<<caloriesNeed<<endl;

	return 0;
}
