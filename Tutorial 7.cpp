#include <iostream>
using namespace std;
int main() 
{
	//nested if statements
	// somewhat advanced but still basic
	// == operator checks if left and right sides are equal or not 
	//similar to LHS==RHS
	float a, b, c;
	cout<<"Enter A: ";
	cin >> a;
	cout << "" << endl;
	cout << "Enter B: ";
	cin >> b;
	cout << "" << endl;
	cout << "Enter C: ";
	cin >> c;
	cout << "" << endl;

	if (a == b && b == c)
	{
		cout << "It is equilateral Triangle" << endl;
	}
	else {
		//nested if inside of else statement
		if (a != b && b != c && a != c) {
			cout << "It is scalene triangle." << endl;
		}
		else {
			cout << "It is isosceles triangle" << endl;
		}
	}
	system("pause>0");	
}