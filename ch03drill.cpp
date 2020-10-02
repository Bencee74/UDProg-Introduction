#include "std_lib_facilities.h"

int main ()
{

	cout << "Enter the name of the person you want to write to!\n";
	string first_name;
	cin >> first_name;



	cout << "Enter the name and sex of one of your other friends'!\n";
	string friend_name;
	char friend_sex = '0';
	int age = 0;
	cin >> friend_name >> friend_sex;
	cout << "Enter your age!\n";
	cin >> age;
	if (age < 0 or age > 110)
		simple_error("you are kidding!");
	cout << "Dear " << first_name << ",\n";
	cout << "\t" << "How are you? I am fine. I miss you. Have you seen " 
	<< friend_name << " lately?" << endl;

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	cout <<  "I heard you just had a birthday and you are " << age << " years old. ";
	if (age < 12)
		cout << "Next year you will be " << age+1 << ".\n";
	if (age == 17)
		cout << "Next year you will be able to vote.\n";
	if (age > 70)
		cout << "I hope you are enjoying retirement.\n";

	cout << "\nYours sincerely,\n";
	cout << "Bence\n";



	return 0;
}