#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, q, a, l, r, sum;
    cin >> t;
    while (t--) {
        sum = 0;
        cin >> n >> q;
        while (n--) cin >> a, sum += a;
        while (q--) cin >> l >> r, sum += (l - r + 1) & 1;
        cout << sum << '\n';
    }
    return 0;
}
