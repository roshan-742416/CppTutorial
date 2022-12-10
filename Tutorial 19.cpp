#include <iostream>
using namespace std;
void main()
{
	//average grade of three grades calculator
	//grades must be between 1 and 5

	int grade,sum=0;
	for (int i = 0; i < 3;i++) {
		do {
			cout << "Enter grade " << i + 1 << ":";
			cin >> grade;
		} while (grade<1||grade>5);
		sum += grade;
	}/* it will repeat the do block while the condition is true and 
	 "i" will not increase from the "for" block*/
	cout << "Average Grade=" << sum / 3;
	system("pause>0");
}