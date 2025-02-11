#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector < long long > v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        unordered_map < int, int > m;
        for (int i = 31; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                if (v[j] & (1 << i)) m[i]++;
            }
        }
        long long ans = 0;
        for (auto it: m) {
            ans = ans + (it.second / k);
            if (it.second % k) ans++;
        }
        cout << ans << endl;
    }

}
