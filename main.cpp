#include <iostream>

using namespace std;


void displayAsterisk(int a);


int main()
{
	
	int firstnum;
	int secondnum;
	int thirdnum;
	int fourthnum;
	int fifthnum;

	cout << "Write a number between 1 and 30: ";
	cin >> firstnum;

	while (firstnum < 0 || firstnum >= 31)
	{
		cout << "Invalid Input. Try again.\n";
		cin >> firstnum;
	}

	cout << "\nWrite a number between 1 and 30: ";
	cin >> secondnum;

	cout << "\nWrite a number between 1 and 30: ";
	cin >> thirdnum;

	cout << "\nWrite a number between 1 and 30: ";
	cin >> fourthnum;

	cout << "\nWrite a number between 1 and 30: ";
	cin >> fifthnum;

	cout << "\n";
	cout << "                  The Bar Graph\n";
	cout << "            ------------------------------\n";
	
	cout << "1st Number: ";
	displayAsterisk(firstnum);
	cout << "\n";
	
	cout << "2nd Number: ";
	displayAsterisk(secondnum);
	cout << "\n";
	
	cout << "3rd Number: ";
	displayAsterisk(thirdnum);
	cout << "\n";

	cout << "4th Number: ";
	displayAsterisk(fourthnum);
	cout << "\n";

	cout << "5th Number: ";
	displayAsterisk(fifthnum);





	return 0;
}


void displayAsterisk(int a)
{

	for (1 <= a; a--;)
	{
		cout << "*";
	}
}