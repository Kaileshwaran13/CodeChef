#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool find_prime(ll y) {
    if (y == 1) return false;
    if (y == 2 || y == 3) return true;
    for (ll i = 2; i * i <= y; i++) {
        if (y % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        ll y = x;
        int cnt = 2;
        ll p1, p2, ans = 1;
        while (cnt) {
            p1 = find_prime(y);
            if (p1) ans *= y, cnt--;
            y++;
        }
        cout << ans << endl;
    }
}
