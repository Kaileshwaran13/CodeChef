#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll temp = n;
        ll odd = 0;
        ll even = 0;
        while (n != 0) {
            int rem = n % 10;
            (rem % 2) ? odd++ : even++;
            n /= 10;
        }
        ((odd > 1 and temp & 1) or(even > 1 and temp % 2 == 0)) ? cout << "YES\n": cout << "NO\n";
    }

}
