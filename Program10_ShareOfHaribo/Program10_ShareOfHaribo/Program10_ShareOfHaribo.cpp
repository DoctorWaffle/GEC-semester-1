#include <iostream>
using namespace std;

int main()
{
    int hariboPacks = 40;
    int students = 14;

    int packPerStudent = (hariboPacks / students);
    int remainingPack = (hariboPacks - (packPerStudent * students));

    cout << "The students get " << packPerStudent << " packs each." << endl;
    cout << "whilst James gets " << remainingPack << " packs" << endl;

    return 0;
}
