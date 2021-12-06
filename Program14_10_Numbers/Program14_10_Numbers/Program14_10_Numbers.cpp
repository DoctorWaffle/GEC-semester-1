#include <iostream>

using namespace std;
int main()
{
	int num1;
	int num2;
	cout << "input a number of your choice" << endl;
	cin >> num1;
	cout << "input a second number of your choice" << endl;
	cin >> num2;

	int sum = num1 + num2;
	float mean = sum / 2.0f;
	cout << "the sum of your two numbers is " << sum << " and the mean of your numbers is " << mean << endl;

	float i = 3;
	int num3 = 1;
	int oldnum;
	
	while (num3 != 0)
	{
		cout << "could you please give me one more number" << endl;
		cin >> num3;
		if (num3 != 0)
		{
			sum = sum + num3;
			float mean = sum / i;
			cout << "the sum of all numbers is " << sum << " and the mean is " << mean << endl;
			i = i + 1;
			oldnum = num3;
		}
	}

		cout << "I apologise but i cannot accept a number of 0" << endl;

	return 0;
	
}
