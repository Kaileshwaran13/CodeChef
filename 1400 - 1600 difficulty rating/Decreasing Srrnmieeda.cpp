#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        if (l <= (r / 2) || l == 1 ll)
            cout << "-1\n";
        else
            cout << r << "\n";
    }
}
