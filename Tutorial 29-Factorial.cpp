#include <iostream>
using namespace std;
int recursive_factorial(int number) {
	if (number == 1)
		return 1;
	else
		return number * recursive_factorial(number - 1);
}

int main() {
	int number;
	cout << "Number:";
	cin >> number;
	cout <<endl<< "Factorial=" << recursive_factorial(number);
	system("pause>0");
}