#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, k;
        cin >> n >> a >> k;
        int p, q;
        p = n * (n - 1) * a + 2 * (k - 1) * ((n - 2) * 180 - n * a);
        q = n * (n - 1);
        int gcd = __gcd(p, q);
        cout << p / gcd << " " << q / gcd << endl;
    }
}
