#include <iostream>
using namespace std;
int main()
{
	//guessing game
	int hostUserNumber, guestUserNumber;
	cout << "Host: ";
	cin >> hostUserNumber;
	system("cls");
	cout << "Guest: ";
	cin >> guestUserNumber;

	/*/if (hostUserNumber == guestUserNumber)
		cout << "Correct!";
	else
		cout << "Failed!";*/

	(hostUserNumber == guestUserNumber) ? cout << "Correct!" : cout << "Failed!";
	system("pause>0");
}