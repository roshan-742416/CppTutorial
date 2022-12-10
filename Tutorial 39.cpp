#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Size:";
	cin >> size;
	cout << endl;
	//allocate dynamic memory-new
	//deallocate dynamic memory-delete
	int* myArray = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "Array[" << i << "]:";
		cin >> myArray[i];
		cout << endl;
	}
	for (int i = 0; i < size; i++) {
		cout << myArray[i] << "  ";
	}
	delete[]myArray;
	myArray = NULL;
	system("pause>0");
	return 0;
}