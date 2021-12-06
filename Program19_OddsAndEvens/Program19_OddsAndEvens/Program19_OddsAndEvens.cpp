#include <iostream>
using namespace std;

bool oddeven (int num);
void outputResults(int numofodd, int oddtotal, int numofeven, int eventotal);

bool oddeven(int num)
{
	if (num % 2 == 0)
		return true;
	else
		return false;
}

void outputResults(int numofodd, int oddtotal, int numofeven, int eventotal)
{
	cout << "the number of even numbers is " << numofeven << " and the total of them is " << eventotal << endl;
	cout << "the number of odd numbers is " << numofodd << " and the total of them is " << oddtotal << endl;
}
	
int main()
{
	int num = 0;
	int numofeven = 0;
	int eventotal = 0;
	int oddtotal = 0;
	int numofodd = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "please input another full number" << endl;
		cin >> num;
				

		if (oddeven(num))
		{
			cout << num << " is even." << endl;
			numofeven++;
			eventotal = num + eventotal;
		}
		else
		{
			cout << num << " is odd." << endl;
			numofodd++;
			oddtotal = num + oddtotal;
		}
	}

	outputResults(numofodd, oddtotal, numofeven, eventotal);
	return 0;
}
