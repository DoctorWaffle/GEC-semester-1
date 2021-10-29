#include <iostream>
using namespace std;
int main()
{
    char userStatus;
    int gameChoice;
    cout << "please tell me whether you are a student (s), a teacher (t) or other (o)" << endl;
    cin >> userStatus;
    cout << "please tell me which game you wish to play 1 or 2" << endl;
    cin >> gameChoice;
    if (userStatus == 's' || userStatus== 't')
    {
        if (gameChoice == 1)
        {
            cout << "congratulations you can get a 20% discount on this game" << endl;
        }
        else if(gameChoice == 2)
        {
            cout << "congratulations you can get a 10% discount on this game" << endl;
        }
        else
        {
            cout << "sorry you are not entitled to a discount" << endl;
        }
    }
    else
    {
        cout << "sorry you are not entitled to a discount" << endl;
    }
    return 0;
}
