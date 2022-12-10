#include <iostream>
#include <list>
using namespace std;
class YoutubeChannel {
public:
	string Name;
	string OwnerName;
	int SubsctribersCount;
	list<string> PublishedVideoTitles;

	YoutubeChannel(string name, string ownerName) {//constructor

		//constructor has same name as class
		//constructor has no return type 
		Name = name;
		ownerName = OwnerName;
		SubsctribersCount = 0;
	}
	void GetInfo() {
		//object method or behaviour
		cout << "Name: " << Name << endl;
		cout << "Owner Name: " << OwnerName << endl;
		cout << "Subscribers Count: " << SubsctribersCount << endl;
		cout << "Videos: " << endl;

		for (string videoTitles : PublishedVideoTitles) {
			cout << videoTitles << endl;
		}

	}
};
int main()
{
	YoutubeChannel ytChannel("Roshan Poudel", "Roshan Poudel");
	YoutubeChannel ytChannel2("Amy Sings", "Amy Singhania");
	ytChannel.PublishedVideoTitles.push_back("Tasker Live wallpaper");
	ytChannel.PublishedVideoTitles.push_back("PUBG Gameplay");
	ytChannel.PublishedVideoTitles.push_back("Green Building Project");
	ytChannel2.PublishedVideoTitles.push_back("Mein Chali");
	ytChannel2.PublishedVideoTitles.push_back("Sakhiyan");
	ytChannel2.PublishedVideoTitles.push_back("Lehenga");
	ytChannel.GetInfo();
	cout << endl;
	ytChannel2.GetInfo();
	system("pause>0");
}