#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::chrono_literals;
int main()
{
	char yesno;
	do
	{
		int starcount;

		cout << "please input a number between 1 and 10" << endl;
		cin >> starcount;

		for (int i = 0; i <= starcount; i++)
		{
			switch (i)
			{
			case 1:
			{
				cout << "*" << endl;
				break;
			}
			case 2:
			{
				cout << "**" << endl;
				break;
			}
			case 3:
			{
				cout << "***" << endl;
				break;
			}
			case 4:
			{
				cout << "****" << endl;
				break;
			}
			case 5:
			{
				cout << "*****" << endl;
				break;
			}
			case 6:
			{
				cout << "******" << endl;
				break;
			}
			case 7:
			{
				cout << "*******" << endl;
				break;
			}
			case 8:
			{
				cout << "********" << endl;
				break;
			}
			case 9:
			{
				cout << "*********" << endl;
				break;
			}
			case 10:
			{
				cout << "**********" << endl;
				break;
			}
			}

		}

		cout << "would you like to have another go?" << endl;
		cin >> yesno;
	} while (yesno != 'n');
	if (yesno = 'n')
	{
		cout << "Goodbye" << endl;
		std::this_thread::sleep_for(2s);
	}
	return 0;
}