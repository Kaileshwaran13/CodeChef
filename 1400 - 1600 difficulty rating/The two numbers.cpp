#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n == 2) {
            cout << 0 << endl;
            continue;
        }
        if ((n % 2) != 0) {
            cout << ((n / 2) * ((n / 2) + 1)) - 1 << endl;
        }
        else {
            if ((n / 2) % 2 == 0) {
                ll x = n / 2 - 1;
                ll y = n / 2 + 1;
                cout << (x * y) - 1 << endl;
            }
            else {
                ll x = n / 2 - 2;
                ll y = n / 2 + 2;
                cout << (x * y) - 1 << endl;
            }
        }
    }

}
