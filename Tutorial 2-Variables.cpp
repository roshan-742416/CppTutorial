#include<iostream>
void main() {
	/* Variables*/
	/*variables are containers that contain data, they have a certain size and they can also OVERFLOW*/



	float annualSalary = 50000.99;//floating variables contain decimal values
								  //let us calculate monthly salary available data

	std::cout << "Monthly salary is "<<annualSalary / 12 << std::endl;

								  //we could have also used
	float monthlySalary = annualSalary / 12;
	std::cout << "Monthly salary is " << monthlySalary << std::endl;

								  //maybe we dont want to HARD CODE our program 
								  //lets take user input 

	std::cout << "Enter your annual salary:";
	std::cin >> annualSalary;
	monthlySalary = annualSalary / 12;
	std::cout << "Monthly salary is " << monthlySalary << std::endl;
	std::cout << "In 10 years you will earn:" << annualSalary * 10 << std::endl;

	/*Character variables*/
	char character = 'a';
	//give meaningful names to your characters 
	//underscore is available as the only available special character
	//camelCasing is a technique for naming variables
	//blank spaces are not available for naming variables

	/*Data types*/	
	/*WHole number data types INTeger contains negative and positive data types*/
	int yearOfBirth = 1999;

	/*CHARacter data types*/
	char gender = 'm';

	/*BOOLean data type*/
	bool isOVER18 = true;//or false

	/*FLOATing point number 4 bytes*/
	float avgGrade = 3.92;

	/*DOUBLE size of float 8bytes*/
	double bankBalance = 99999999999999999999.9999;

	/*sizeof operator*/
	std::cout << "Size of int is " << sizeof(int ) << " bytes" << std::endl;
	std::cout<<"Size of float is "<< sizeof(float)<<" bytes"<<std::endl;
	std::cout<<"Size of double is "<< sizeof(double)<<" bytes"<<std::endl;
	std::cout<<"Size of char is "<< sizeof(char)<<" bytes"<<std::endl;
	std::cout << "Size of bool is " << sizeof(bool) << " bytes" << std::endl;
	std::cout << "Int min value is " << INT_MIN << std::endl;//-infinity...-3,-2,-1
	std::cout << "Int max value is " << INT_MAX << std::endl;//0,1,2,3,...infinity

	//datatype using only positive numbers is UNSIGNEDint
	std::cout << "size of unsigned int is " << sizeof(unsigned int) <<" bytes" << std::endl;
	std::cout << "max value of unsigned int is " << UINT_MAX << std::endl;

	/*Variable overflow*/
	int intMax = INT_MAX;
	std::cout << intMax + 1;

	system("pause>0");
}