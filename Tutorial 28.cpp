#include <iostream>
using namespace std;

template<typename Type>
void Swap(Type& a, Type& b) {
	T temp =a;
	a = b;
	b = temp;
}
void main(){
	int a = 5, b = 7;
	cout << a << "--" << b<<endl;
	Swap(a, b);
	cout << a << "--" << b<<endl;
	char c = 'R', d = 'P';
	cout << c << "--" << d<<endl;
	Swap(c,d);
	cout << c << "--" << d<<endl;

	system("pause>0");
} 