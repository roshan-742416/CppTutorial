#include <iostream>
using namespace std;
void main()
{
	//Multiplication table
	//Nested for statements
	
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i << '*' << j << '=' << i * j<<endl;
		}
		cout << endl;
	}
	system("pause>0");
}