#include <iostream>
using namespace std;
int main()
{
    int rain = 1;
    int snow = 2;
    int weather;
    int temp;
    cout << "Please tell me whether it is raining or snowing with either 1 or 2" << endl;
    cin >> weather;
    
    cout << "Please tell me the temperature currently" << endl;
    cin >> temp;
    if (weather == 1)
    {
        if (temp > 15)
        {
            cout << "I suggest you wear a light raincoat" << endl;
        }
        else
        {
            cout << "I suggest you wear a thick raincoat" << endl;
        }
    }
    else if (weather == 2)
    {
        if (temp > 5)
        {
            cout << "you should wear something warm" << endl;
        }
        else if (temp > 0)
        {
            cout << "you should really wrap up well" << endl;
        }
        else
        {
            cout << "you should stay at home its too cold out" << endl;
        }
    }
    else
    {
        cout << " it is neither raining nor snowing so go out and have a nice day" << endl;
    }

    return 0;
}

