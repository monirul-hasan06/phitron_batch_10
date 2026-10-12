#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "ALPHA" << endl << "IS CAPITAL";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "ALPHA" << endl << "IS SMALL";
    }
    else cout << "IS DIGIT";

    return 0;
}