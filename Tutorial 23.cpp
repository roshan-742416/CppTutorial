#include <iostream>
using namespace std;

//introduction to functions 

void function(); 

void main()//void means that it does not return anything
{
	cout << "hello from main()" << endl;
	//we will now call our function
	function();
	function();
	function();
	function();

	system("pause>0");
}
void function()//parenthesis are empty because we are not sending any parameters  
{
	cout << "hello from function()" << endl;
}
//cpp code is executed from top to bottom

//here we first declared our function
//then we defined our function
//otherwise you need to define function before main function