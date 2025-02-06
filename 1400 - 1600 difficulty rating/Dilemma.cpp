#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll ones = 0 ll;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                ++ones;
        }
        if (ones & 1)
            cout << "WIN\n";
        else
            cout << "LOSE\n";
    }
    return 0;
}
