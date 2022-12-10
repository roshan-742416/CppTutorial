#include <iostream>
#include <string>
using namespace std;
void spaceErase(string sentence)
{
    sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());
}
void asciiCONVERT(string sentence)
{
    int l = sentence.length();
    int i;
    for (i = 0; i < l; i++) {
        cout << int(sentence.at(i)) << " ";
    }
}
int main()
{
    string sentence;
    cout << "Enter your sentence:" << endl;
    getline(cin, sentence);
    spaceErase(sentence);
    cout << "Your ASCII code is :" << endl;
    asciiCONVERT(sentence);
    system("pause>0");
}