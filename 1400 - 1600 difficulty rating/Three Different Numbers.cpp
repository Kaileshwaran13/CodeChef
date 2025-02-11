#include <bits/stdc++.h>
using namespace std;
unsigned int M = 1000000000 + 7;
#define ll long long int

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        ll ans = a[0] % M;
        ll k = ((a[1] - 1) % M);
        ll m = ((a[2] - 2) % M);
        ans = ans * k % M;
        ans = ans * m % M;
        cout << ans % M << endl;
    }
    return 0;
}
