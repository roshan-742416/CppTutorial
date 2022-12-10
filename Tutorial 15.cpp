#include <iostream>
using namespace std;
int main()
{
	//count digits of a number
	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << endl;
	if (number == 0) {
		cout << "you have entered 0.\n";
	}
	else {
		if (number < 0) {
			number *= -1;
		}
		int counter=0;
		while (number > 0) {
			number /= 10;
			/*123/10=12 because int can only hold integers*/
			counter++;
			/*take one digit and increase counter*/
		}
		cout << "Your numbers has " << counter << " digits";
	}
	system("pause>0");
}