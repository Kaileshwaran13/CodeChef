#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (a == b)
        {
            cout << "YES\n";
        }
        else if (c == d)
        {
            cout << "NO\n";
        }
        else
        {
            if (abs(b - a) % abs(c - d) == 0)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
    }

    return 0;
}
