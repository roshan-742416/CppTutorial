#include <iostream>
using namespace std;
void main()
{
	/*int number, factorial = 1;
	cout << "FACTORIAL CALCUATOR \n Number :";
	cin >> number;
	if (number != int(number))
		cout << "Enter whole number.";
	else {
		do {
			factorial *= number;
			number--;
		} while (number!=1);
	}
	cout << "Factorial=" << factorial << endl;*/
	int number,factorial=1;
	cout << "Number:";
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}
	cout << "Factorial=" << factorial;
	system("pause>0");
}