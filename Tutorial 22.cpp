#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	/*int height, adder = 0;
	char symbol;
	cout << "Height:";
	cin >> height;
	cout << endl;
	cout << "Symbol:";
	cin >> symbol;
	cout << endl;
	for (int h = 0; h < height; h++) {
		adder++;
		for (int w = 0; w < adder; w++)
			cout <<setw(0.2) << symbol;
		cout << endl;
	}*/
	int height;
	char symbol;
	cout << "Height:";
	cin >> height;
	cout << endl;
	cout << "Symbol:";
	cin >> symbol;
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < i; j++) {
			cout << symbol;
		}
		cout << endl;
	}

	system("pause>0");
}