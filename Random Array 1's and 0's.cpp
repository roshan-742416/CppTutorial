#include <iostream>
#include <stdlib.h>
//random number generator
int main()
{
	int size,i;
	std::cout << "Enter size of array:" << std::endl;
	std::cin >> size;
	std::cout << std::endl;

	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand();
	}
	for (int i = 0; i < size; i++) {
		int r = arr[i] % 2;
		std::cout << r << " ";
	}

	delete[]arr;
	system("pause>0");
	return 0;
}