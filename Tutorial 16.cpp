#include <iostream>
using namespace std;
void main()
{
	//reversing number
	int number,reversedNumber=0;//0
	cout << "Number: ";
	cin >> number;//123
	cout << endl;
	while (number != 0) 
	{	
		//use number !=0 so as to even use this program for negative numbers
		//if we use number >0 then it only works for positive numbers	
		
		reversedNumber *= 10;			//to shift the number to left
		int lastDigit = number % 10;	//modulate the number by 10 to get last digit
		reversedNumber += lastDigit;	//add last digit to reversed number
		number /= 10;					//delete last digit from original number
	}
	cout <<"Your reversed number is " << reversedNumber;

}