#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n];
        int sumA = 0, sumB = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sumA += a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sumB += b[i];
        }

        if (sumA == sumB)
        {
            cout << "Draw" << endl;
        }
        else if (sumA > sumB)
        {
            cout << "Om" << endl;
        }
        else
        {
            cout << "Addy" << endl;
        }
    }

    return 0;
}
