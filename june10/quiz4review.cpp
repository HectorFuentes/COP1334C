//quiz4review.cpp
//june 10, 2015
//This program demonstrates some simple for loops and while loops.

#include<iostream>
using namespace std;

int main()
{
	//1) 50	40	30	20
	for(int i = 50; i >= 20; i-=10)
	{
	cout<<i<<"\t";
	}
	cout<<endl;
	
	//2) a) 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
	int total = 0; //initialize the total before the loop 
	for(int i = 1; i <= 10; i++)
	{
		cout<<i;
		if(i < 10)
		{
		cout<<" + ";
		}
		else
		{
		cout<<" = ";
		}
		
		//add to accumulator(total)
		total = total + i; //total+=i
		
	}
	
	cout<<total<<endl;
	
	//b) same as above but as a while loop
	
	total = 0; //initialize the total before the loop 
	int i = 1;
	while(i <= 10)
	{
		cout<<i;
		if(i < 10)
		{
		cout<<" + ";
		}
		else
		{
		cout<<" = ";
		}
		
		//add to accumulator(total)
		total = total + i; //total+=i
		
		//update
		i++;
		
	}
	
	cout<<total<<endl;
	
	//3)
	//36
	//18
	//9
	for(int i = 36; i >= 9; i/=2)
	{
		cout<<i<<endl;
	}
	
	
	
	
	
 return 0;
}
