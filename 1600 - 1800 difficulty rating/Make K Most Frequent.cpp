#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector < int > a(n);
        vector < vector < int >> freq(21, vector < int > (n + 1, 0));
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            for (int e = 1; e <= 20; e++) {
                freq[e][i + 1] = freq[e][i] + (a[i] == e);
            }
        }
        int ans = 2;
        int mx = -1;
        for (int e = 1; e <= 20; e++) {
            mx = max(mx, freq[e][n]);
        }
        if (mx <= freq[k][n]) {
            ans = 0;
        } else {
            for (int i = 1; i <= n; i++) {
                if (i == 1 || i == n) {
                    if (a[i - 1] == k) {
                        ans = 1;
                        break;
                    }
                }
                int mxp = -1;
                int mxs = -1;
                for (int e = 1; e <= 20; e++) {
                    mxp = max(mxp, freq[e][i]);
                    mxs = max(mxs, freq[e][n] - freq[e][i - 1]);
                }
                if (mxp <= freq[k][i] || mxs <= freq[k][n] - freq[k][i - 1]) {
                    ans = 1;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
