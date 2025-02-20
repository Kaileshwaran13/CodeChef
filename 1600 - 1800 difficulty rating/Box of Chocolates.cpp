#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int a[n];
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long maxi = * max_element(a, a + n);
        vector < long long > b;
        for (long long i = 0; i < n; i++) {
            if (maxi == a[i]) {
                b.push_back(i + 1);
            }
        }
        if (b.size() == 1) {
            cout << n / 2 << "\n";
        }
        else {
            int maxi = n - b[b.size() - 1] + b[0] - 1, cur, ind = 0;
            for (long long i = 1; i < b.size(); i++) {
                cur = b[i] - b[i - 1] - 1;
                if (cur > maxi) {
                    maxi = cur;
                    ind = i;
                }
            }
            long long x;
            if (ind == 0) {

                x = b[b.size() - 1] - b[ind] + n / 2 + 1;
            }
            else {
                x = b[ind - 1] + (n - b[ind] + 1) + n / 2;
            }
            if (n - x + 1 >= 0) {
                cout << n - x + 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
    }
}
