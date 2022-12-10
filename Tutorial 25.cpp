#include <iostream>
#include <string>
using namespace std;
//prime number

//without using function
/*
void main()
{
	int number;
	cout << "Number:";
	cin >> number;
	bool isPrimeFlag = true;
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			isPrimeFlag = false;
			break;
		}
	}
	if (isPrimeFlag == true) {
		cout << "Prime number.";
	}
	else {
		cout << "Not a prime number.";
	}
	system("pause>0");
*/

//using function

bool isPrimeNumber(int number) {
	bool isPrimeFlag = true;
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			isPrimeFlag = false;
			break;
		}
	}
	return isPrimeFlag;
}

//better way

/*
bool isPrimeNumber(int number) {
	bool isPrimeFlag = true;
	for (int i = 2; i < number; i++) {
		return false;
		}
	}
	return true;
}
*/


void main()
{
	int number;
	cout << "Number:";
	cin >> number;
	bool isPrimeFlag = isPrimeNumber(number);
	if (isPrimeFlag == true)
		cout << "Prime number.";
	else
		cout << "Not a prime number.";
	system("pause>0");
}

//to list prime numbers between 0 to whatever
/*
for (int i = 0; i <= 99999999999; i++) {
bool isPrime = isPrimeNumber(i);
if (isPrime == true)
cout << i << endl;
*/