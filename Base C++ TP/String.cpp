#include<iostream>
#include<string>
using namespace std;

int main()
{
	start:
	string text;
	cout << "Write something: ";
	cin >> text;
	cout << "You wrote: " << text << endl;
	cout << "It count " << text.length() << " letter(s)" << endl;
	text.insert(1,"x"); cout << "" << text << "" << endl;
	text.replace(3,3,"°"); cout << "" << text << "" << endl;
	text.clear();
	cout << "Nothing : " << text << "" << endl;
	
	system("pause>null"); 
	system("cls"); goto start;
}
