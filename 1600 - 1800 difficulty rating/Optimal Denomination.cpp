#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        for (auto & i: a)
            cin >> i;
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }
        int totalSum = accumulate(a.begin(), a.end(), 0LL);
        vector < int > prefixGCD(n, 0), suffixGCD(n, 0);
        prefixGCD[0] = a[0];
        suffixGCD[n - 1] = a[n - 1];
        for (int i = 1; i < n; i++) {
            prefixGCD[i] = __gcd(prefixGCD[i - 1], a[i]);
        }
        for (int i = n - 2; i >= 0; i--) {
            suffixGCD[i] = __gcd(suffixGCD[i + 1], a[i]);
        }
        int ans = totalSum;
        for (int i = 0; i < n; i++) {
            int gcd;
            if (i == 0)
                gcd = suffixGCD[i + 1];
            else if (i == n - 1)
                gcd = prefixGCD[i - 1];
            else
                gcd = __gcd(prefixGCD[i - 1], suffixGCD[i + 1]);
            if (gcd != 0) {
                int notes = (totalSum - a[i] + gcd) / gcd;
                ans = min(ans, notes);
            }
        }
        cout << ans << endl;
    }
}
