#include <bits/stdc++.h>
using namespace std;

int main() {
    int M = 1e9 + 7;
    int t;
    cin >> t;
    long long inv2 = 500000004;
    long long p[12];
    p[0] = 1;
    for (int i = 1; i < 12; i++) p[i] = p[i - 1] * 10;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        long long ans = 0;
        for (int d = 1; d <= 10; d++) {
            long long L = max(l, p[d - 1]), R = min(r, p[d] - 1);
            if (L > R) continue;
            long long n = (R - L + 1) % M;
            long long s = ((L % M + R % M) % M * n) % M;
            s = (s * inv2) % M;
            ans = (ans + d * s) % M;
        }
        cout << ans << "\n";
    }
    return 0;
}
