#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, n, i, j, k;
    //cin >> t;
    t = 1;
    while (t--)
    {
        cin >> n;
        if (n & 1)
            cout << "-1\n";
        else
            cout << "0 0\n" << n << " " << 0 << "\n" << n / 2 << " " << n / 2 << "\n" << n / 2 << " " << -(n / 2) << "\n";
    }
    return 0;
}
