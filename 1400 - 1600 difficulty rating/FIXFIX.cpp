#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        if (n - 1 == k) {
            cout << -1 << endl;
            continue;
        }
        if (n == k) {
            for (int i = 0; i < n; i++) {
                cout << i + 1 << " ";
            }
            cout << endl;
            continue;
        }
        for (int i = 0; i < k; i++) {
            cout << i + 1 << " ";
        }
        for (int i = k + 1; i < n; i++) {
            cout << i + 1 << " ";
        }
        cout << k + 1 << endl;
    }
    return 0;
}
