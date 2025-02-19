#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int a[n];
        for (auto & i: a) {
            cin >> i;
        }
        long long int d1 = a[1] - a[0], d2 = a[n - 1] - a[n - 2], f1 = 1, f2 = 1, d;

        for (int i = 2; i < n - 1; i++) {
            if (a[i] - a[i - 1] != d2) {
                f2 = 0;
            }
            if (a[i] - a[i - 1] != d1) {
                f1 = 0;
            }
        }
        long long int f = a[0];
        if (!f1 && !f2) {
            d = (a[n - 1] - a[0]) / (n - 1);
        }
        else {
            if (f1) {
                d = d1;
            }
            else {
                d = d2;
                f = a[n - 1] - (d * (n - 1));
            }
        }
        for (int i = 0; i < n; i++) {
            cout << (f + i * d) << " ";
        }
        cout << "\n";
    }
}
