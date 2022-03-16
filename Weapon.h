#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <array>

// Rule for name:
// Weapon = Wea, Description = Descrip


class Weapon
{
private:
	std::string name;
	std::string descrip;
	std::string sound;
	int price;
	int count;
	bool owned;
	

public:

	/*Weapon();*/

	void set_Wea_Name(std::string);

	void set_Wea_Descrip(std::string);

	void set_Wea_Sound(std::string);

	void set_Wea_Price(int);

	bool set_Wea_Owned();

	bool change_Owned();

	std::string get_Wea_Name();
	std::string get_Wea_Descrip();
	std::string get_Wea_Sound();
	int get_Wea_Price();

};