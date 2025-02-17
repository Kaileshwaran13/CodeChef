#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll i = 1;
        ll a = 1;
        ll b = 1;
        while (n > b) {
            ll temp = a;
            a = b;
            b += temp;
            i++;
        }
        if (b != n) i--;
        cout << i << endl;
    }

}
