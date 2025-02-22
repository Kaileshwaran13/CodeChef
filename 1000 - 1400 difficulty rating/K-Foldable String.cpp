#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        char ch[n];
        long long cntOn = 0;
        long long cntZr = 0;
        for (int i = 0; i < n; i++) {
            cin >> ch[i];
            if (ch[i] == '1') {
                cntOn++;
            } else {
                cntZr++;
            }
        }
        if (k == 1) {
            if (cntOn == n || cntZr == n) {
                cout << ch << endl;
            } else {
                cout << "IMPOSSIBLE" << '\m';
            }
            continue;
        }
        long long x = n / k;
        if (cntZr % x != 0 || cntOn % x != 0) {
            cout << "IMPOSSIBLE" << '\n';
            continue;
        }
        long long cntZrOne = cntZr / x;
        long long cntOnOne = cntOn / x;
        for (int i = 0; i < x; i++) {
            if (i % 2 == 0) {
                for (int k = 0; k < cntZrOne; k++) {
                    cout << '0';
                }
                for (int k = 0; k < cntOnOne; k++) {
                    cout << '1';
                }
            } else {
                for (int k = 0; k < cntOnOne; k++) {
                    cout << '1';
                }
                for (int k = 0; k < cntZrOne; k++) {
                    cout << '0';
                }
            }
        }
        cout << '\n';
    }
}
