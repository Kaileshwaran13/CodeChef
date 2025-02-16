#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1e9 + 7;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n <= 2) {
            cout << "0\n";
            continue;
        }
        int res = 1, base = 2, val = n - 1;
        while (val > 0) {
            if (val & 1) {
                res = (res * base) % mod;
            }
            base = (base * base) % mod;
            val = val / 2;
        }
        cout << (res % mod) - 2 << "\n";
    }
}
