/*Tatiana Smidi
Hector Fuentes
May 27. 2015
Classwork 2

This program reads and displays data from a text file.*/
#include<iostream> //needed for cin/cout
#include<iomanip>  //needed for setw and setprecision
#include<string>	 //needed to use string data type
#include<fstream>  //needed for reading/writing files
using namespace std;

int main()
{

	//Declare/intialize variables
	string make1, make2, make3, model1, model2, model3;
	int year1 = 0, year2 = 0 ,year3 = 0;

	//Declare File Pointer
	ifstream infile;

	//Intro
	cout<<"Welcome to the Car Info Collector!\n";

	//Open the file cars.txt
	infile.open("cars.txt", ios::in);

	//Check if File exists
	if(!infile)
		{
			cout<<"File does not exist!\n";
		}
	//read in data line by line
	infile>>year1>>make1>>model1;
	infile>>year2>>make2>>model2;

	//Close the file
	infile.close();
	
	//Display Results
	cout<<"\nYear\tMake\tModel\n";
	cout<<"-----------------------\n";
	cout<<year1<<"\t"<<make1<<"\t"<<model1<<endl;
	cout<<year2<<"\t"<<make2<<"\t"<<model2<<endl;

	//Prompt user for year3, make3 and model3 of car
	cout<<"Enter year: ";
	cin>>year3; 
	cout<<"Enter make: ";
	cin>>make3;
	cout<<"Enter model: ";
	cin>>model3;

	//Write raw data to the file
	//declare a file pointer for output
	ofstream outfile;
	//Open cars.txt
	outfile.open("cars.txt", ios::app);

	//Append the data
	outfile<<year3<<"\t"<<make3<<"\t"<<model3<<endl;
	//close file
	outfile.close();

 return 0;
}
