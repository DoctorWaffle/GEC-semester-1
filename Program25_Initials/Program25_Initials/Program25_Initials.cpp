#include <iostream>
using namespace std;
int main()
{
	char initials[10];
	cout << "Please input your identity like so: [Initial 1][ ][Initial 2][ ][Surname]" << endl;
	cin.getline (initials, 10);
	
	
	int i;
	int spacecount = 0;
	for (i = 0; i < 10; i++)
	{
	
		if (initials[i] == ' ')
		{
			spacecount++;
		}
		else
		{
			if (spacecount < 2)
			{
				cout << initials[i] << endl;
			}
			else
			{
				cout << initials[i];
			}
		}
	}
	
	return 0;
}