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

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int Om = *max_element(a.begin(), a.end());
        int Addy = *max_element(b.begin(), b.end());

        if (Om > Addy)
            cout << "Om" << endl;
        else if (Addy > Om)
            cout << "Addy" << endl;
        else
            cout << "Draw" << endl;
    }

    return 0;
}
