#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sentence;
    cout << "Please enter a sentence" << endl;
    cin >> sentence;
    cin.getline(sentence);
    cout << "your sentence was: " << sentence << endl;
