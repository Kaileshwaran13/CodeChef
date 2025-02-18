#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1e9 + 7;

int binExp(int a, int e) {
    int res = 1;
    while (e) {
        if (e & 1) res = (res * a) % mod;
        e /= 2;
        a = (a * a) % mod;
    }
    return res;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, w;
        cin >> n >> w;
        int c = 0;
        for (int f = 1; f <= 9; f++) {
            for (int l = 0; l <= 9; l++) {
                if (l - f == w) {
                    c++;
                }
            }
        }
        int res = binExp(10, n - 2);
        cout << (c * res) % mod << '\n';
    }
}
