#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll a[1000001] = {0};

int main() {
    for (ll i = 2; i <= 1000001; i++) {
        if (a[i] == 0) {
            for (ll j = i; j <= 1000001; j += i) {
                a[j]++;
            }
        }
    }
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll sum = 0;
        for (ll i = n; i < m; i++) {

            sum += a[i];
        }
        cout << sum << endl;
    }
}
