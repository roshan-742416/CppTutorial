#include <iostream>
using namespace std;
int main()
{
	//pointers
	int n = 5;
	cout << n << endl;
	cout << &n << endl;//address of n
	int* ptr = &n;//pointer starts with asterisk
	cout << ptr << endl;//it gives address of n
	cout << *ptr << endl;//dereferencing pointer
	*ptr = 10;
	cout << *ptr << endl;
	cout << n << endl;//value of n has changed to 10 as well 

	int v;
	int* ptr2=&v;
	*ptr2 = 7;
	cout << v << endl;

	system("pause>0");
	return 0;
}