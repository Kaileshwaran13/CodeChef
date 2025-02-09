#include<bits/stdc++.h>
using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector < int > a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        auto check = [ & ](int m) {
            int l = 0, r = 0, cnt = 1, mn = a[l], mx = a[l];
            while (r < n) {
                mx = max(mx, a[r]), mn = min(mn, a[r]);
                int d = (mx - mn + 1) / 2;
                if (d <= m) ++r;
                else {
                    cnt++, l = r;
                    mn = a[l], mx = a[r];
                    ++r;
                }
            }
            return cnt <= k + 1;
        };
        int l = 0, r = 1e9, ans = 1e9;
        while (l <= r) {
            int m = l + ((r - l) >> 1);
            if (check(m)) ans = min(ans, m), r = m - 1;
            else l = m + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}
