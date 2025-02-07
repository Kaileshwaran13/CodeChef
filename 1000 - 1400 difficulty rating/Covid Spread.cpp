#include <bits/stdc++.h>

using namespace std;

int power(int x, int y) {
    int mod = 1e9 + 7;
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return (power(x, y / 2) % mod * power(x, y / 2) % mod) % mod;
    else
        return (x * (power(x, y / 2) % mod * power(x, y / 2) % mod) % mod) % mod;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int ans = 0;
        if (d <= 10) {
            ans = power(2, d);
            if (ans > n) {
                cout << n << '\n';
            }
            else cout << ans << '\n';
        }
        else {
            ans = power(2, 10);
            ans = ans * power(3, d - 10);
            if (ans > n) {
                cout << n << '\n';
            }
            else cout << ans << '\n';
        }

    }
    return 0;
}
