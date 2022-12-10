#include <iostream>
int main() {
	/*converting characters into ascii values*/	
	std::cout << (int)'a' << std::endl;
	std::cout << (int)'A' << std::endl;
	std::cout << int('b') << std::endl;
	std::cout << char(65) << std::endl;

	char c1, c2, c3,c4,c5;
	std::cout << "Enter your five characters:";
	std::cin >> c1>>c2>>c3>>c4>>c5;
	std::cout<<std::endl;
	std::cout << "ASCII values are:" << int(c1)<<int(c2)<<int(c3)<<int(c4)<<int(c5);
}