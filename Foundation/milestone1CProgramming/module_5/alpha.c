#include <iostream>
using namespace std;

int main()
{
    cout << "Enter character: ";
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    cout << ch;

    return 0;
}
