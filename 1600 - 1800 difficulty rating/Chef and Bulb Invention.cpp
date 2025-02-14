#include <bits/stdc++.h>
using namespace std;

signed main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, p, k;
        cin >> n >> p >> k;
        if (n >= k) {
            int r = (n - 1) % k + 1;
            int x = (n - 1) / k + 1;
            int y = p % k;
            if (y <= r) {
                int count = y * x + p / k + 1;
                cout << count << endl;
            } else {
                int count = r * x + (y - r) * (x - 1) + p / k + 1;
                cout << count << endl;
            }
        } else {
            int v = (p % k) + 1;
            cout << v << endl;
        }
    }
    return 0;

}
