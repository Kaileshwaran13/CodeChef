#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector < long long > v(n, 0);
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long s = accumulate(v.begin(), v.end(), 0);
        i = 0;
        while (s >= ((i * (i + 1)) / 2))
            ++i;
        cout << i - 1 << "\n";
    }
    return 0;
}
