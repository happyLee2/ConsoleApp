#pragma once

#include <iostream>


using namespace std;


class Calendar
{
private:
	int year;
	int month;
	int days;

public:
	Calendar();
	Calendar(int m, int d);

	void set_year(int);
	void set_month(int);
	void set_days(int);

	int get_month();
	int get_days();
};