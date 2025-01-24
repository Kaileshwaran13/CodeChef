#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int c = 0, p = a[n - 1] * a[n - 2];
        for (int i = 0; p == a[n - 1] * a[n - 2]; i++) {
            p = a[n - 1] * a[n - 2 - i];
            c++;
        }
        float b, d;
        if (a[n - 1] == a[n - 2]) {
            b = (c) * (c - 1) / 2;
        }
        else {
            b = c - 1;
        }
        d = (n) * (n - 1) / 2;
        double e = (b / d);
        cout << fixed << setprecision(8) << e << '\n';
    }
}
