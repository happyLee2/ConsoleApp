#include "Calendar.h"


Calendar::Calendar()
{
	month = 0;
	days = 0;
}

Calendar::Calendar(int m, int d)
{
	month = m;
	days = d;
}

void Calendar::set_year(int y)
{
	year = y;
}

void Calendar::set_month(int m)
{
	month = m;
}

void Calendar::set_days(int d)
{
	days = d;
}

int Calendar::get_month()
{
	return month;
}

int Calendar::get_days()
{
	return days;
}