#include <iostream>
using namespace std;

int main()
{
    const int MAX_ITEMS = 4;
    int numItems = 0;
    string inventory[MAX_ITEMS];
    inventory[numItems++] = "sword";
    inventory[numItems++] = "battle axe";
    inventory[numItems++] = "healing potion";
    inventory[numItems++] = "dagger";

    cout << "On your journey you have amassed many a useful item. However you feel compelled to pick up the wizards staff you found on the ground" << endl;
    cout << "Here is your inventory thusfar:" << endl;
    numItems = 0;
    for (numItems > 0; numItems < MAX_ITEMS; numItems++)
    {
        cout << inventory[numItems] << endl;
    }
    cout << "would you like to swap the item for the dagger? y or n" << endl;
    char answer;
    cin >> answer;
    if (answer =='y')
    {
        cout << "you have picked up the wizards staff" << endl;
        cout << "Here is your inventory:" <<endl;
        numItems = 0;
        inventory[3]= "wizard staff";
        for (numItems > 0; numItems < MAX_ITEMS; numItems++)
        {
            cout << inventory[numItems] << endl;
        }
    }
    else if (answer == 'n')
    {
        cout << "you have chosen to not pick up the wizards staff" << endl;
        cout << "here is your inventory:" << endl;
        numItems = 0;

        for (numItems > 0; numItems < MAX_ITEMS; numItems++)
        {
            cout << inventory[numItems] << endl;
        }
    }
    else
    {
        cout << "I don't recognise what you said please try again" << endl;
    }
    return 0;
}
