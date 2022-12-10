#include <iostream>
#include <list>
using namespace std;
class YoutubeChannel {
private:
	string Name;
	string OwnerName;
	int SubsctribersCount;
	list<string> PublishedVideoTitles;

	//encapsulation says that these above properties should not be public
	//instead make public methods for invoking these properties  as below
public:
	YoutubeChannel(string name, string ownerName) {//constructor

		//constructor has same name as class
		//constructor has no return type 
		Name = name;
		ownerName = OwnerName;
		SubsctribersCount = 0;
	}//constructor
	void Subscribe() {
		SubsctribersCount++;
	}
	void Unsubscribe() {
		if (SubsctribersCount > 0) {
			SubsctribersCount--;
		}
	}
	void PublishVideo(string title) {
		PublishedVideoTitles.push_back(title);
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
	ytChannel.PublishVideo("Tasker Live wallpaper");
	ytChannel.PublishVideo("PUBG Gameplay");
	ytChannel.PublishVideo("Green Building Project");
	ytChannel2.PublishVideo("Mein Chali");
	ytChannel2.PublishVideo("Sakhiyan");
	ytChannel2.PublishVideo("Lehenga");
	ytChannel.Subscribe();
	ytChannel.Subscribe();
	ytChannel.Subscribe();
	ytChannel.Subscribe();
	ytChannel.Unsubscribe();
	ytChannel.Unsubscribe();
	ytChannel2.Subscribe();
	ytChannel2.Subscribe();
	ytChannel2.Subscribe();
	ytChannel2.Subscribe();
	ytChannel2.Unsubscribe();
	ytChannel2.Unsubscribe();

	ytChannel.GetInfo();
	cout << endl;
	ytChannel2.GetInfo();
	system("pause>0");
}