#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tt, t, n, i, j, k;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        if (n <= 250000)
            t = 0;
        else if (n <= 500000)
        {
            t = (n - 250000) * 0.05;
        }
        else if (n <= 750000)
        {
            t = 12500 + (n - 500000) * 0.1;
        }
        else if (n <= 1000000)
        {
            t = 12500 + 25000 + (n - 750000) * 0.15;
        }
        else if (n <= 1250000)
        {
            t = 12500 + 25000 + 37500 + (n - 1000000) * 0.2;
        }
        else if (n <= 1500000)
        {
            t = 12500 + 25000 + 37500 + 50000 + (n - 1250000) * 0.25;
        }
        else
        {
            t = 12500 + 25000 + 37500 + 50000 + 62500 + (n - 1500000) * 0.3;
        }
        n -= t;
        cout << abs(n) << "\n";
    }
    return 0;
}
