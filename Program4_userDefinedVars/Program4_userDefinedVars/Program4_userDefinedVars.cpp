#include <iostream>
using namespace std;
int main()
{
	typedef int Health;

	enum Weapons
	{
		Sword = 1,
		Dagger,
		Mace,
		Twin_Swords,
		Samurai,
		Wizard_Staff,
		Fire_Potion,
		Ice_Blade,
		Small_Knife


	};
	Health currentHealth;
	currentHealth = 13000;

	Weapons currentWeapon;
	currentWeapon = Samurai;
	cout << "My current health is: " << currentHealth << endl;
	cout << "And the ID of my weapon of choice is: " << currentWeapon << endl;

	return 0;
}