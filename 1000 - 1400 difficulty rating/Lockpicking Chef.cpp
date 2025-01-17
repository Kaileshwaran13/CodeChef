#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s, k;
        cin >> s >> k;
        int cnt = 0;
        int ans = INT_MAX;
        int j = 0;
        for (int i = 0; i < n - m + 1; i++) {
            for (int j = 0; j < m; j++) {
                int x = abs(s[i + j] - k[j]);
                if (x > 5) {
                    x = 10 - x;
                }
                cnt += x;
            }
            ans = min(ans, cnt);
            cnt = 0;
        }
        cout << ans << '\n';
    }

}
