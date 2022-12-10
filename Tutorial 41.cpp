#include <iostream>
#include <fstream>
#include <string>
//must include fstream for file handling 
int main() {
	std::fstream myFile;
	//how to write to a text file 
	/*myFile.open("roshan.txt", std::ios::out);//write
	//after writing or reading from file we must close the file
	if (myFile.is_open()) {
		myFile << "Hello2!\n";
		myFile.close();
	}
	*/
	//it replaced the previous changes

	/*
	myFile.open("roshan.txt", std::ios::app);//append
	if (myFile.is_open()) {
		myFile << "Hello! this is appended\n";
		myFile << "This is second line\n";
		myFile.close();
	}
	*/
	myFile.open("roshan.txt", std::ios::in);//read
	if (myFile.is_open()) {
		std::string line;
		while (std::getline(myFile,line)) {
			std::cout << line << std::endl;
		}

	}

	system("pause>0");
}