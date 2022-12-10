#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	float height;
	float weight;
	float BMI;
	cout << "Enter your Height in m:";
	cin >> height;
	cout << "" << endl;
	cout << "Enter your Weight in kg:";
	cin >> weight;
	BMI = weight / (height * height);
	cout << "\n your BMI is " << BMI << endl;
	if (BMI < 18.5)
		cout << "You are underweight! You should eat more !";
	else {
		if (BMI > 25)
			cout << "You are overweight! You should exercise more and eat more healthy food!";
		else
			cout << "You are normal weight!";
	}
	system("pause>0");
}