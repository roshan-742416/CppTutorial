#include <iostream>
#include <list>
using namespace std;
class YoutubeChannel {
public:
	string Name;
	string OwnerName;
	int SubsctribersCount;
	list<string> PublishedVideoTitles;

	YoutubeChannel(string name, string ownerName) {
		Name = name;
		ownerName = OwnerName;
		SubsctribersCount = 0;
	}

};
int main()
{
	YoutubeChannel ytChannel("Roshan Poudel","Roshan Poudel");
	YoutubeChannel ytChannel2("Amy Sings", "Amy Singhania");
	ytChannel.PublishedVideoTitles.push_back("Tasker Live wallpaper");
	ytChannel.PublishedVideoTitles.push_back("PUBG Gameplay");
	ytChannel.PublishedVideoTitles.push_back("Green Building Project");
	ytChannel2.PublishedVideoTitles.push_back("Mein Chali");
	ytChannel2.PublishedVideoTitles.push_back("Sakhiyan");
	ytChannel2.PublishedVideoTitles.push_back("Lehenga");
	cout << "Name: " << ytChannel.Name << endl;
	cout << "Owner Name: " << ytChannel.OwnerName << endl;
	cout << "Subscribers Count: " << ytChannel.SubsctribersCount << endl;
	cout << "Videos: " << endl;

	for (string videoTitles : ytChannel.PublishedVideoTitles) {
		cout << videoTitles << endl;
	}
	cout << "Name: " << ytChannel2.Name << endl;
	cout << "Owner Name: " << ytChannel2.OwnerName << endl;
	cout << "Subscribers Count: " << ytChannel2.SubsctribersCount << endl;
	cout << "Videos: " << endl;

	for (string videoTitles : ytChannel2.PublishedVideoTitles) {
		cout << videoTitles << endl;
	}
	system("pause>0");
}