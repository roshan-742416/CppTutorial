#include <iostream>
using namespace std;

int main()
{
    //below are BINARY ARITHMETIC OPERATORS as they use 2 numbers
    // +,-,*,/,%
    cout << 5 + 2 << endl;//addition
    cout << 5 - 2 << endl;//substraction
    cout << 5 * 2 << endl;//multiplication
    cout << 5 / 2 << endl;//division of whole numbers
    //dividion of two whole numbers gives another whole number
    //2.5 becomes 2 hence use numbers of different data types
    cout << float(5) / 2 << endl;
    //division of numbers of different data types
    
    cout << 5 % 2 << endl;//Modulo


    //UNARY OPERATORS
    //++,--
    //operator of increment ++
    //operator of decrement ==

    int counter = 7;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    int counter2=13;
    cout << counter2-- << endl;//this is post increment
    cout << counter2 << endl;
    cout << ++counter2 << endl;
    cout << counter2 << endl;

    //same is applied for decrement operator

    int counter3=21;
    cout << counter3-- << endl;
    cout << counter3 << endl;

    system("cls");//clear screen without deleting code

    //RELATIONAL OPERATORS
    //less than <
    //greater than >
    //less than or equal to <=
    //greater than or equal to >=
    //equal to ==
    //not equal to !=

    int a = 5, b = 5;
    cout << (a > b)<<endl;//result is 0,false
    cout << (a <= b) << endl;//resut 1, true 
    cout << (a == b) << endl;//resut 1, true 
    cout << (a != b) << endl;//resut 0, false

    //comma(,) is also a operation i.e. binary operator
    // in int a=5, b=5; it gives the meaning of ALSO

    system("cls");
    //LOGICAL OPERATORS
    //logical AND &&
    //Logical OR ||
    //Logical NOT !

    int c = 5, d = 8;
    cout << (c == 5 && d == 5) << endl;//AND result 0
    cout << (c == 5 || d == 5) << endl;//OR result 1
    cout << !(c == 5 || d == 5) << endl;// result !1=0

    //BIGGEST PRIORITY =ARITHMETIC OPERATOR
    //NEXT PRIORITY = RELATION OPERATOR
    //LOWEST PRIORITY = LOGICAL OPERATOR

    system("cls");
    //OPERATOR OF ASSIGNMENT
    //assign =
    //adds and assigns +=
    //substracts and ssigns -=
    //multiply and assigns *=
    //divides and assigns /=
    //modulates and assigns %=

    //direction of operations -RIGHT TO LEFT 
    int x = 5;//assigns right to left 
    cout << "x=" << x << endl;
    x += 7;////x=x+7
    cout << "x=" << x << endl;
    x -= 7; // x=x-7
    cout << "x=" << x << endl;
    x *=7;//x=x*7
    cout << "x=" << x << endl;
    x /= 7;//x=x/7;
    cout << "x=" << x << endl;




    system("pause>0");    
}