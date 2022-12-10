#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	int height;
	char symbol;
	cout << "Height:";
	cin >> height;
	cout << endl;
	cout << "Symbol:";
	cin >> symbol;
	cout << endl;
	for (int i = height; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << symbol;
		}
		cout << endl;
	}
}