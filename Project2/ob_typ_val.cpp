#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	string recipient_name;
	string friend_name;
	char gender{ '0' };
	int age{ -1 };
	string my_name;

	cout << "Enter my name: ";
	cin >> my_name;
	cout << "Letter recipient: ";
	cin >> recipient_name;
	cout << "Please enter other friend's name: ";
	cin >> friend_name;
	cout << "Please enter your friend's gender(m / f): ";
	cin >> gender;
	
	while (1)
	{
		cout << "Please enter recipient's age: ";
		cin >> age;
		if (age > 0 && age < 100)
			break;
		cout << "Don't play around!\n";
	}

	cout << "-----------------------------------------------------------\n";
	cout << "\ndear " << recipient_name << ",\n\n";
	cout << "\nhow are you? I'm fine. \nI miss you. \nTake care of your health.\n\n";
	cout << "Have you met " << friend_name << " recently? \n";


	///////gender
	if (gender == 'm')
		cout << "When you see " << friend_name << ", tell him to call me. \n";
	else if(gender == 'f')
		cout << "When you see " << friend_name << ", tell her to call me. \n";
	else
		cout << "When you see " << friend_name << ", tell that to call me. \n";
	////////////////age
	cout << "It's your " << age << "th birthday?\n";

	if (age > 70)
		cout << "How are you doing after retirement? \n";
	else if (age == 17)
		cout << "You can vote next year.\n";
	else if (age < 12)
		cout << "You will turn " << age + 1 << " next year.\n";

	//////////////finish
	cout << "\nYour friend " << my_name << ".\n\n";

	return 0;
}