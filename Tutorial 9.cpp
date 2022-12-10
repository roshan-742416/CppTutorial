//swap values of two variables with and without use of third vairable
#include <iostream>
using namespace std;

int main()
{
	//using a third variable
	int a = 20;
	int b = 10;

	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "\nb=" << b << endl;
	system("cls");
	a = 20, b = 10;
	a = a + b;//a holds both values of a and b now i.e 30
	b = a - b;//b now holds (a+b)-b=a
	a = a - b;//(a+b)-)a=b
	cout << "a=" << a << "\nb=" << b << endl;
	system("pause>0");
}