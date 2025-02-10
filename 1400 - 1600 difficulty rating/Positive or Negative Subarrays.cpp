#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector < ll > v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll neg_subarray = 0;
        for (ll i = 0; i < n; i++) {
            if (v[i] == -1) {
                neg_subarray = neg_subarray + i + 1;
            }
        }
        ll total_subarray = (n * (n + 1)) / 2;
        ll pos_subarray = total_subarray - neg_subarray;
        ll ans = abs(pos_subarray - neg_subarray);
        cout << ans << endl;
    }
}
