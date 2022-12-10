#include <iostream>
#include <string>
using namespace std;
//passing parameter or value to function
void introduceMe(string name, string city, int age = 0) {//int age=0 is a default parameter, in case we dont have value 
	//always provide default argument at only at end of list of parameters
	cout << "My name is " << name <<"."<< endl;
	cout << "I am from " << city << "."<< endl;
	if (age != 0) {
		cout << "I am " << age << " years old." << endl;
	}
	cout << endl;

}


void main()
{
	/*introduceMe("Roshan", "Lalitpur", 22);//passing argument i.e string name
	introduceMe("Saldina","Mostar",25);
	introduceMe("Anna","NY");//anna will be 0 years 
							//but due to if statement we will simply not talk about age now
							*/
	string name, city;
	int age;
	cout << "Name:";
	getline (cin, name);
	cout << endl<< "City:";
	getline(cin, city);
	cout << endl << "Age:";
	cin >> age;
	system("cls");
	introduceMe(name, city, age);

	system("pause>0");
}