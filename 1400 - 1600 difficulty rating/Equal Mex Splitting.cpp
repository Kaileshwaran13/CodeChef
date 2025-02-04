#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long ans = 0;
        for (i = 0; i < n; i++)
        {
            cin >> k;
            if (k)
                ++ans;
        }
        cout << max(ans, n - ans) << "\n";
    }
    return 0;
}
