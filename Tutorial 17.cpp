#include <iostream>
using namespace std;
void main()
{
	int usersPin = 1234, pin, errorCounter = 0;
	do {
		cout << "PIN:";
		cin >> pin;
		cout << endl;
		if (pin != usersPin) {
			errorCounter++;
		}
		else {

		}
	} while (errorCounter < 3 && pin != usersPin);
	if (errorCounter < 3) {
		cout << "Loading...";//correctly entered
	}
	else
		cout << "Blocked...";
	system("pause>0");
}