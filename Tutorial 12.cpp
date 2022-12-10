#include <iostream>
using namespace std;

int main()
{
	float num1, num2;//numbers
	char operation;//operation signs are characters
	cout << "**Roshan's Calculator**"<<endl;
	cin >> num1 >> operation >> num2;
	system("cls");
	//using SWITCH CASE STATEMENT
	switch (operation) {
	case '-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
	case '+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
	case'*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
	case '/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
	case '%':
		bool isNum1Int, isNum2Int;
		isNum1Int = (int(num1) == num1);
		isNum2Int = (int(num2) == num2);
		if (isNum1Int && isNum2Int) {
			cout << num1 << operation << num2 << "=" << int(num1) % int(num2); break;
		}
		else
			cout << "Not valid";
		break;
	default:cout << "Nice try!"; break;
		
		//modulo operator can only work with integer/whole numbers
		//break operator is necessary after each 
	}
	system("pause>0");
}