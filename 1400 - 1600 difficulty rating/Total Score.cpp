#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector < long long > v(k, 0);
        for (i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        for (i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            long long ans = 0;
            for (j = 0; j < k; j++)
            {
                if (s[j] == '1')
                    ans += v[j];
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
