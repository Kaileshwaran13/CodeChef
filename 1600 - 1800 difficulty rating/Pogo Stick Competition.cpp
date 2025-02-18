#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector < int > v(n, 0);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector < int > dp(n, 0);
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (i - k >= 0)
            {
                dp[i] = max(v[i], dp[i - k] + v[i]);
            }
            else
            {
                dp[i] = v[i];
            }
            if (i + k >= n)
                ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
