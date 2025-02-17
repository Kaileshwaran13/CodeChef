#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k, gd = 0, c = 0, gdk;
        bool f = true;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0) gd = a[i];
            gd = gcd(gd, a[i]);
        }
        for (ll i = 0; i < n; i++) {
            if (f) {
                gdk = a[i];
                f = false;
            }
            else {
                gdk = gcd(gdk, a[i]);
            }
            if (gd == gdk) f = true, c++;
            if (c == k) break;
        }
        c == k ? cout << "yes" : cout << "no";
        cout << endl;

    }
    return 0;
}
