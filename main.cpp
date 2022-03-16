#include <iostream>
#include <string>
#include <iomanip>
#include <array>
#include "Weapon.h"



//void Inventory()
//{
//	int aInventory[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//}
//
//
//void Store()
//{
//	bool store_playing = true;
//
//
//}

Weapon weapon[9];

void displayStoreMenu();
void displayStoreWeapon();

//const int SLOT = 9;

int main()
{
	int choice;
	int account = 300000;
	char storeMenu;
	char storeWeaponMenu;

	/*int aSlot[SLOT];*/

	weapon[0].set_Wea_Name("Normal Sword");
	weapon[1].set_Wea_Name("Excalibur");
	weapon[2].set_Wea_Name("Robert's Fishing Rod");
	weapon[3].set_Wea_Name("Night Lord's Dagger");
	weapon[4].set_Wea_Name("Magic Wand");
	weapon[5].set_Wea_Name("Inivisble Cloak");
	weapon[6].set_Wea_Name("Normal Magic Staff");
	weapon[7].set_Wea_Name("Black Gauntlet");
	weapon[8].set_Wea_Name("Long Nail");

	weapon[0].set_Wea_Price(10000);
	weapon[1].set_Wea_Price(100000);
	weapon[2].set_Wea_Price(100000);
	weapon[3].set_Wea_Price(20000);
	weapon[4].set_Wea_Price(10000);
	weapon[5].set_Wea_Price(100000);
	weapon[6].set_Wea_Price(10000);
	weapon[7].set_Wea_Price(30000);
	weapon[8].set_Wea_Price(10000);

	weapon[0].set_Wea_Owned();

	
	// Store Menu

	//weapon1.set_Wea_Name("Normal Sword");
	//weapon2.set_Wea_Name("Excalibur");
	//weapon3.set_Wea_Name("Robert's Fishing Rod");
	//weapon4.set_Wea_Name("Night Lord's Dagger");
	//weapon5.set_Wea_Name("Magic Wand");
	//weapon6.set_Wea_Name("Inivisble Cloak");
	//weapon7.set_Wea_Name("Normal Magic Staff");
	//weapon8.set_Wea_Name("Black Gauntlet");
	//weapon9.set_Wea_Name("Long Nail");

	//weapon1.set_Wea_Price(10000);
	//weapon2.set_Wea_Price(100000);
	//weapon3.set_Wea_Price(100000);
	//weapon4.set_Wea_Price(20000);
	//weapon5.set_Wea_Price(10000);
	//weapon6.set_Wea_Price(100000);
	//weapon7.set_Wea_Price(10000);
	//weapon8.set_Wea_Price(30000);
	//weapon9.set_Wea_Price(10000);



	bool playingStoreWeapon = true;

	std::cout << "Welcome to BravyBraveWrold!\n";
	std::cout << "We are currently doing a special event for New Users!\n";
	std::cout << "We give you 100,000 gold for free!\n";
	std::cout << "The money succeessfully went into your account!\n";
	std::cout << "Have fun in BravyBraveWorld!\n";
	std::cout << "----------------------------------------------------------------------------------------------------\n";


	do
	{
		


		displayStoreMenu();
		
		std::cin >> storeMenu;

		
		switch (storeMenu)
		{
		case 'A':

			do
			{
				displayStoreWeapon();
				std::cin >> choice;


				switch (choice)
				{
				case 1:

					if (account >= weapon[0].get_Wea_Price() /*&& weapon[0].set_Wea_Owned()*/)
					{
						account = account - weapon[0].get_Wea_Price();
						/*weapon[0].change_Owned();*/
						std::cout << "You have purchased " << weapon[0].get_Wea_Name() << std::endl;
					}

					else
					{
						std::cout << "You don't have enough money." << std::endl;
					}

					break;

				case 2:

					if (account >= weapon[1].get_Wea_Price())
					{
						account = account - weapon[1].get_Wea_Price();
						std::cout << "You have purchased " << weapon[1].get_Wea_Name() << std::endl;
					}

					else
					{
						std::cout << "You don't have enough money." << std::endl;
					}

					break;

				case 3:

					if (account >= weapon[2].get_Wea_Price())
					{
						account = account - weapon[2].get_Wea_Price();
						std::cout << "You have purchased " << weapon[2].get_Wea_Name() << std::endl;
					}

					else
					{
						std::cout << "You don't have enough money." << std::endl;
					}

					break;

				case 4:

					if (account >= weapon[3].get_Wea_Price())
					{
						account = account - weapon[3].get_Wea_Price();
						std::cout << "You have purchased " << weapon[3].get_Wea_Name() << std::endl;
					}

					else
					{
						std::cout << "You don't have enough money." << std::endl;
					}

					break;

				case 5:

					if (account >= weapon[4].get_Wea_Price())
					{
						account = account - weapon[4].get_Wea_Price();
						std::cout << "You have purchased " << weapon[4].get_Wea_Name() << std::endl;
					}

					else
					{
						std::cout << "You don't have enough money." << std::endl;
					}

					break;

				case 6:

					if (account >= weapon[5].get_Wea_Price())
					{
						account = account - weapon[5].get_Wea_Price();
						std::cout << "You have purchased " << weapon[5].get_Wea_Name() << std::endl;
					}

					else
					{
						std::cout << "You don't have enough money." << std::endl;
					}

					break;

				case 7:

					if (account >= weapon[6].get_Wea_Price())
					{
						account = account - weapon[6].get_Wea_Price();
						std::cout << "You have purchased " << weapon[6].get_Wea_Name() << std::endl;
					}

					else
					{
						std::cout << "You don't have enough money." << std::endl;
					}

					break;

				case 8:

					if (account >= weapon[7].get_Wea_Price())
					{
						account = account - weapon[7].get_Wea_Price();
						std::cout << "You have purchased " << weapon[7].get_Wea_Name() << std::endl;
					}

					else
					{
						std::cout << "You don't have enough money." << std::endl;
					}

					break;

				case 9:

					if (account >= weapon[8].get_Wea_Price())
					{
						account = account - weapon[8].get_Wea_Price();
						std::cout << "You have purchased " << weapon[8].get_Wea_Name() << std::endl;
					}

					else
					{
						std::cout << "You don't have enough money." << std::endl;
					}

					break;

				}

				std::cout << "If you want to buy more, press Q" << std::endl;
				std::cout << "If you want to go back to main Store Menu, press W" << std::endl;

				std::cin >> storeWeaponMenu;

				if (storeWeaponMenu == 'W')
				{
					playingStoreWeapon = false;
					break;
				}

			} while (playingStoreWeapon = true);
			break;
		

		case 'B':
			std::cout << "Your current balance is: " << account << " gold." << std::endl;
			break;


		case 'C':
			break;
		}

		

	} while (storeMenu != 'C');

	std::cout << "Yo!" << std::endl;


	return 0;
		





	//while (store_playing)
	//{

	//}

	// Player's Room

}


void displayStoreMenu()
{
	std::cout << "\n          Store Menu\n";
	std::cout << "A) Buy Weapons\n";
	std::cout << "B) Check Balance\n";
	std::cout << "C) Exit the Store\n";
	std::cout << "Enter your choice: ";
}

void displayStoreWeapon()
{
	std::cout << "1: " << weapon[0].get_Wea_Name() << " " << weapon[0].get_Wea_Price() << " gold" << std::endl;
	std::cout << "2: " << weapon[1].get_Wea_Name() << " " << weapon[1].get_Wea_Price() << " gold" << std::endl;
	std::cout << "3: " << weapon[2].get_Wea_Name() << " " << weapon[2].get_Wea_Price() << " gold" << std::endl;
	std::cout << "4: " << weapon[3].get_Wea_Name() << " " << weapon[3].get_Wea_Price() << " gold" << std::endl;
	std::cout << "5: " << weapon[4].get_Wea_Name() << " " << weapon[4].get_Wea_Price() << " gold" << std::endl;
	std::cout << "6: " << weapon[5].get_Wea_Name() << " " << weapon[5].get_Wea_Price() << " gold" << std::endl;
	std::cout << "7: " << weapon[6].get_Wea_Name() << " " << weapon[6].get_Wea_Price() << " gold" << std::endl;
	std::cout << "8: " << weapon[7].get_Wea_Name() << " " << weapon[7].get_Wea_Price() << " gold" << std::endl;
	std::cout << "9: " << weapon[8].get_Wea_Name() << " " << weapon[8].get_Wea_Price() << " gold" << std::endl;
	std::cout << "\nEnter a number to buy the weapon: ";
}