#include <iostream>
#include "Calendar.h"

using namespace std;

const int SIZE = 13;
Calendar calen[SIZE];

int search_month(const Calendar[], int, int*);

int main()
{
	
	//Calendar calen[SIZE] = { Calendar(0, 0),
	//						Calendar(1, 31),
	//						Calendar(2, 28),
	//						Calendar(3, 31),
	//						Calendar(4, 30),
	//						Calendar(5, 31),
	//						Calendar(6, 30),
	//						Calendar(7, 31),
	//						Calendar(8, 31),
	//						Calendar(9, 30),
	//						Calendar(10, 31),
	//						Calendar(11, 30),
	//						Calendar(12, 31) };


	// if ( y % 4 == 0)
	// y = leap year
	// february 2 has 29 days
	// if (y & 400 == 0)
	// y is leap year

	int user_year;
	int user_month;
	int* pint;
	pint = &user_month;
	bool on_calendar = true;
	int pos;

	do
	{
		cout << "Enter a year and a month: ";
		cin >> user_year;
		cout << " ";
		cin >> *pint;
		cout << endl;

		if (user_year == 0 && *pint == 0)
		{
			cout << "March, 2022" << endl;
			on_calendar = false;
			break;
		}


		if (user_year % 400 == 0)
		{
			continue;
			if (user_year % 4 == 0)
				continue;
				if (*pint == 2)
				{
					cout << "29 days" << endl;
					continue;
				}

		}

		pos = search_month(calen, SIZE, &user_month);

		if (pos == -1)
		{
			cout << "Invalid input. Try again." << endl;
		}

		else
		{
			cout << calen[pos].get_days() << endl;
		}


	} while (on_calendar);



	return 0;
}


int search_month(const Calendar obejct[], int size, int *month)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (calen[index].get_month() == *month)
		{
			found = true;
			position = index;
		}
		index++;
	}

	return position;
}