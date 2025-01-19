#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector < long long > a(n, 0), v(n, 0);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n - 1; i++)
        {
            v[i] = a[i + 1] - a[i];
        }
        v[i] = 360 + a[0] - a[i];
        long long g = gcd(v[0], v[1]);
        for (i = 2; i < n; i++)
        {
            g = gcd(g, v[i]);
        }
        long long ans = 0;
        for (auto x: v)
        {
            ans += ((x / g) - 1);
        }
        cout << ans << "\n";
    }
}
