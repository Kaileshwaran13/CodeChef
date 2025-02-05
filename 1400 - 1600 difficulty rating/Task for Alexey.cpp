#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector < long long > a(n, 0);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long mini = LLONG_MAX;
        for (i = 0; i < (n - 1); i++)
        {
            for (j = i + 1; j < n; j++)
            {
                long long l = (a[i] * a[j]) / __gcd(a[i], a[j]);
                mini = min(mini, l);
            }
        }
        cout << mini << "\n";
    }
    return 0;
}
