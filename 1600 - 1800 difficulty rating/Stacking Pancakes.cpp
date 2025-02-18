#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, mod = 1000000007;
    cin >> t;
    vector < vector < long long >> dp(1001, vector < long long > (1001, 0));
    dp[1][1] = 1;
    for (int i = 2; i <= 1000; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i][j] = ((dp[i - 1][j] * j) % mod + dp[i - 1][j - 1] % mod) % mod;
        }
    }
    while (t--) {
        long long n;
        cin >> n;
        long long ans = 0;
        for (int m = 1; m <= n; m++) {
            ans = (ans + dp[n][m]) % mod;
        }
        cout << ans << endl;
    }

}
