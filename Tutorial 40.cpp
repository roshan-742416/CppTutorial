#include <iostream>
using namespace std;
int main() {

	int rows, columns;
	cout << "Rows:";
	cin >> rows;
	cout << endl << "Columns:";
	cin >> columns;
	cout << endl;
	int** table = new int*[rows];
	for (int i = 0; i < rows; i++) {
		table[i] = new int[columns];
	}
	table[0][1] = 88;
	cout<<table[0][1];

	for (int i = 0; i < rows; i++) {
		delete[] table[i];
	}
	delete[] table;
	table = NULL;
	system("pause>0");
	return 0;
}