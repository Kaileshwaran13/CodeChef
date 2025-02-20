#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        ll a, b;
        cin >> a >> b;
        while (gcd(a, b) > 1) {
            b /= gcd(a, b);
        }
        if (b > 1) 
            cout << "NO\n";
        else 
            cout << "YES\n";
    }
}
