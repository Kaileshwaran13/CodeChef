#include <bits/stdc++.h>
using namespace std;

int mod = 9;

long long int binpow(long long int a, long long int b) {
    a = a % mod;
    long long int r = 1;
    while (b) {
        if (b & 1) {
            r = (r * a) % mod;
        }
        a = (a * a) % mod;
        b = b >> 1;
    }
    return r == 0 ? 9 : r;
}


int main() {
    long long int t, a, n;
    cin >> t;
    while (t--) {
        cin >> a >> n;
        cout << binpow(a, n) << endl;
    }
    return 0;
}
