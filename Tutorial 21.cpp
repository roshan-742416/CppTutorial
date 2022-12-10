#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	int height, width;
	char symbol;
	cout << "Height:";
	cin >> height;
	cout<<endl;
	cout << "Width:";
	cin >> width;
	cout<<endl;
	cout << "Symbol:";
	cin >> symbol;
	cout << endl;
	for (int h = 0; h < height; h++) {
		for (int w=0; w< width; w++) {

			cout <<setw(3) << symbol;
		}
		cout << endl;
	}
	system("pause>0");
}