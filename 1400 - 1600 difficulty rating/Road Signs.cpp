#include <bits/stdc++.h>
using namespace std;

int power(long long base, int exp, int mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << (power(2, k, 1000000007) * 5LL) % 1000000007 << endl;
    }
    return 0;
}
