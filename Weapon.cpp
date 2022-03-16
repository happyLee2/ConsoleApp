#include <iostream>
#include "Weapon.h"

//Weapon::Weapon()
//{
//	owned = false;
//}

void Weapon::set_Wea_Name(std::string n)
{
	name = n;
}

void Weapon::set_Wea_Descrip(std::string d)
{
	descrip = d;
}

void Weapon::set_Wea_Sound(std::string s)
{
	sound = s;
}

void Weapon::set_Wea_Price(int p)
{
	price = p;
}

bool Weapon::set_Wea_Owned()
{
	owned == false;
	return owned;
}

bool Weapon::change_Owned()
{
	return owned + 1;
}

//bool Weapon::show_Owned()
//{
//	return owned;
//}
//
//bool Weapon::set_Owned()
//{
//	owned = false;
//	return owned;
//}


//void Weapon::get_Owned()
//{
//	owned = true;
//}


std::string Weapon::get_Wea_Name()
{
	return name;
}

std::string Weapon::get_Wea_Descrip()
{
	return descrip;
}

std::string Weapon::get_Wea_Sound()
{
	return sound;
}

int Weapon::get_Wea_Price()
{
	return price;
}