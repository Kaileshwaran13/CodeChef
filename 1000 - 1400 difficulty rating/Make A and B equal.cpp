#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t t;
    cin >> t;
    while (t--) {
        int64_t n;
        cin >> n;
        int64_t nsum = 0, psum = 0;
        int64_t a[n], b[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (a[i] > b[i]) {
                psum = psum + a[i] - b[i];
            } else {
                nsum = nsum + b[i] - a[i];
            }
        }
        if (nsum == psum) {
            cout << psum << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
