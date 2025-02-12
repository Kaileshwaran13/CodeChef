#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        int a[n + 10];
        a[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            if (x % 2 == 0) {
                a[i] = 1;
            }
            else {
                a[i] = 0;
            }
        }
        for (int i = 1; i <= n; i++) {
            a[i] += a[i - 1];
        }
        int q, l, r;
        cin >> q;
        while (q--) {
            cin >> l >> r;
            l--;
            if (abs(a[r] - a[l]) >= 1) {
                cout << "EVEN" << endl;
            }
            else {
                cout << "ODD" << endl;
            }
        }
    }
    return 0;
}
