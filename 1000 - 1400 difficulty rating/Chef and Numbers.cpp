#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, c, i, adj, maxf, ans;
    cin >> t;
    while (t--) {
        ans = 0;
        maxf = INT_MIN;
        map < int, int > f;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
            f[a[i]]++;
        }
        for (auto x: f) {
            adj = 0;
            for (i = 0; i < n - 1; i++) {
                if (x.first == a[i] && x.first == a[i + 1]) {
                    i++;
                    adj++;
                }
            }
            adj = x.second - adj;
            if (adj > maxf) {
                maxf = adj;
                ans = x.first;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
