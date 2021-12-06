#include <iostream>
using namespace std;
int main()
{
	int playerlife = 100;
	int damage;
	int i;
	for (i = 0; i < 10;)
	{
		i++;
		cout << playerlife << endl;
		cout << "question " << i << ": How much damage shall I deal?\n";
		cin >> damage;
		playerlife = playerlife - damage;
		}
	if (playerlife < 1, i < 10)
	{
		cout << "Early end. Player Died!" << endl;
	}
	else if (playerlife < 1, i= 10)
	{
		cout << "The Player answered all the questions but has unfortunately died" << endl;
	}
	else
	{
		cout << "All questions left. Player Survived!" << endl;
	}
	return 0;
}

