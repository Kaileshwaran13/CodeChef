#include <bits/stdc++.h>

#define int long long
using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int curr = 0;
        map < int, int > v;
        v[0]++;
        int ans = n * (n + 1) / 2;
        for (auto x: s) {
            if (x == '1') curr++;
            else curr--;

            ans += v[curr]++;
        }

        cout << ans << "\n";
    }
}
