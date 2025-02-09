#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        double pa, pb, k, ans = 0;
        cin >> pa;
        pb = 1 - pa;
        k = 10000.0;
        if (pa > 0.500000) {
            ans = (2 * (1 - pa)) * k;
            k += ans;
            cout << fixed << setprecision(6) << k * pa << endl;
        } else {
            ans = (2 * (1 - pb)) * k;
            k += ans;
            cout << fixed << setprecision(6) << k * pb << endl;
        }
    }

}
