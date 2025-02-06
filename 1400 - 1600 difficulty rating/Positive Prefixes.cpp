#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector < int > v(n + 1, -1);
        int mo = min(k, (n + 1) / 2);
        k -= mo;
        int o = 1;
        while (mo) {
            v[o] = +1;
            mo--;
            o += 2;
        }
        int me = (n % 2 ? n - 1 : n);
        while (k > 0) {
            v[me] = +1;
            me -= 2;
            k--;
        }
        for (int i = 1; i <= n; i++) {
            cout << v[i] * i << " ";
        }
        cout << endl;
    }
    return 0;
}
