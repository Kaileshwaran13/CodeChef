#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector < int > dp(n);
        vector < int > temp = v;
        sort(temp.begin(), temp.end());
        sort(temp.rbegin(), temp.rend());
        map < int, int > m;
        for (int i = 0; i < n; i++) {
            m[temp[i]] = i + 1;
        }
        for (int i = 0; i < n; i++) {
            dp[i] = m[v[i]];
        }
        int prev = dp[0];
        int st = 1;
        int ans = 0;
        while (st < n) {
            if (dp[st] == prev + 1 || dp[st] == prev - 1) {
                prev = dp[st];
            }
            else {
                ans++;
                prev = dp[st];
            }
            st++;
        }
        ans++;
        cout << ans << "\n";
    }
}
