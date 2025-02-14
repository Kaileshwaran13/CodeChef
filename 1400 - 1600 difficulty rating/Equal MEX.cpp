#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector < int > a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            int t;
            cin >> t;
            a[t]++;
        }
        for (int i = 0; i < 2 * n; i++) {
            if (a[i] == 0) {
                cout << "YES" << endl;
                break;
            }
            if (a[i] == 1) {
                cout << "NO" << endl;
                break;
            }
        }
    }
}
