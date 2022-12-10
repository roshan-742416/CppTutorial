#include <iostream>
int main()
{
	int number;
	std::cout << "Enter your number:" << std::endl;
	std::cin >> number;
	std::cout << "" << std::endl;
	if (number % 2 == 0)
	{
		std::cout << "It is even number" << std::endl;
	}
	else {
		std::cout << "It is odd number" << std::endl;
	}
	system("pause>0");


}