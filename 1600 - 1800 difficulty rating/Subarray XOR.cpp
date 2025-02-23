#include <bits/stdc++.h>
using namespace std;
#define mod 998244353

long long POW(long long a, long long b) {
    long long r = 1;
    while (b > 0) {
        if (b & 1) {
            r = (r * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return r;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int bits = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && s[i] == '1') 
                bits++;
            if (bits & 1)
                ans = (ans + POW(2, n - i - 1)) % mod;
        }
        cout << ans << endl;
    }
}
