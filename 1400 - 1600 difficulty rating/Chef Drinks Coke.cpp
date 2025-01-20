#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, l, r;
        cin >> n >> m >> k >> l >> r;
        vector < long long > ans;
        while (n--) {
            int c;
            long long p;
            cin >> c >> p;
            for (int i = 1; i <= m; i++) {
                if (c < k - 1) c++;
                else if (c > k + 1) c--;
                else if (c >= k - 1 and c <= k + 1) c = k;
            }
            if (c >= l and c <= r) ans.push_back(p);
        }
        if (ans.size() != 0) {
            ll mn = * min_element(ans.begin(), ans.end());
            cout << mn << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
}
