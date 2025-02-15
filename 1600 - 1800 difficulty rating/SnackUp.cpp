#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
    ll t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << n << '\n';
        for (int i = 1; i <= n; i++) {
            cout << n << '\n';
            for (int j = 1; j <= n; j++) {
                int x = j + i - 1, y = j + i;
                if (x > n && x % n != 0)
                    x %= n;
                else if (x % n == 0)
                    x = n;
                if (y > n && y % n != 0)
                    y %= n;
                else if (y % n == 0)
                    y = n;
                cout << j << " " << x << ' ' << y << '\n';
            }
        }
        cout << '\n';
    }

    return 0;
}
