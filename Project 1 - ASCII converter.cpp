#include <iostream>
#include <string>
void asciiConvert(std::string sentence) {
	int length = sentence.length();
	for (int i = 0; i < length; i++) {
		std::cout << int(sentence.at(i)) << " ";
	}
}
int main() {
	std::string sentence;
	std::cout << "Enter your sentence to be encrypted:";
	getline(std::cin,sentence);
	asciiConvert(sentence);
	system("pause>0");
}