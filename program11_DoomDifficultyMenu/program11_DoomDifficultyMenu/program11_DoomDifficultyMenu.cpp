#include <iostream>
using namespace std;

int main()
{
    int difficulty;
    cout << "Choose your difficulty" << endl;
    const char *list[5] = {"1.	I am too young to die","2.	Hey, not to rough","3.	Hurt me plenty","4.	Ultra - Violence","5.	Nightmare" };
    for (int i = 0; i < 5; i++)
        cout << list[i] << "\n";

    cin >> difficulty;

    switch (difficulty)
    {
        case 1:
        {
            cout << "This should be easy" << endl;
            break;
        }
        case 2:
        {
            cout << "A slight challenge" << endl;
            break;
        }
        case 3:
        {
            cout << "Welcome to hell" << endl;
            break;
        }
        case 4:
        {
            cout << "Finally a challenge" << endl;
            break;
        }
        case 5:
        {
            cout << "Good luck..." << endl;
            break;
        }
    }
    return 0;
}