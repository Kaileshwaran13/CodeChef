#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < vector < int >> v(n, vector < int > (3, 0));
        for (int i = 0; i < n; i++) {
            int s, e, c;
            cin >> s >> e >> c;
            v[i][0] = s;
            v[i][1] = e;
            v[i][2] = c;
        }
        vector < int > dp(49, 0);
        for (int i = 1; i < 49; i++) {
            int mx = dp[i - 1];
            for (int j = 0; j < n; j++) {
                if (v[j][1] == i) {
                    mx = max(mx, v[j][2] + dp[v[j][0]]);
                }
            }
            dp[i] = mx;
        }

        cout << dp[48] << endl;
    }

}
