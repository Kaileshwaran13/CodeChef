#include <bits/stdc++.h>

using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string ans(n, ' ');
        for (int i = k; i < n; i++) 
            ans[i] = s[i];
        int d = 0, sign = -1;
        for (int i = k - 1; i >= 0; i--)
        {
            d = d - sign * i;
            int r = d + sign * i;
            ans[i] = s[r];
            sign = -sign;
        }
        cout << ans << endl;
    }
    return 0;
}
