#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector < long long > v(n, 0);
        long long c = 0;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                ++c;
        }
        if (k > c)
            cout << "NO\n";
        else if (k == 0 && c == n)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
