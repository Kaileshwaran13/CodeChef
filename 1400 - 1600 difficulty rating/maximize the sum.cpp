#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0, k, mx;
        cin >> n >> k;
        vector < ll > a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            ans += (a[i] * b[i]);
        }
        mx = ans;
        for (int i = 0; i < n; i++) {
            ll x;
            if (b[i] < 0) x = a[i] - k;
            else x = a[i] + k;
            ans = ans - (a[i] * b[i]) + (x * b[i]);
            mx = max(mx, ans);
            ans = ans + (a[i] * b[i]) - (x * b[i]);
        }
        cout << mx << endl;
    }
    return 0;
}
