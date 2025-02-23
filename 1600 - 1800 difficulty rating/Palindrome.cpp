#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

long long pw(int a, int b) {
    if (b == 0)
        return 1;
    if (b & 1)
        return (pw(a, b - 1) * a) % mod;
    long long x = pw(a, b / 2);
    return (x * x) % mod;
}

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        x = (26 * (pw(26, (n + 1) / 2) + mod - 1LL)) % mod;
        x = (x + 26 * (pw(26, n / 2) + mod - 1LL)) % mod;
        x = (x * pw(25, mod - 2)) % mod;
        cout << x << '\n';
    }
    return 0;
}
