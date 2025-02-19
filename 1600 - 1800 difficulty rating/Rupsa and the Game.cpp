#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    long long f, s, a, MOD = 1e9+7, prep[100002];
    cin >>t;
    prep[0] = 1;
    for (int i = 1; i < 100002; i++) {
        prep[i] = prep[i-1] * 2;
        prep[i] = prep[i] % MOD;
    }
    while (t--) {
        long long curS, tmpS, resS, tpow = 1;
        cin >> n;
        n--;
        cin >> f >> s;
        curS = ((f*2) % MOD + (s*2) % MOD) % MOD;
        tmpS = ((2*f) % MOD * s % MOD) % MOD;
        tpow = prep[n];
        resS = (tpow % MOD * tmpS % MOD) % MOD;
        long long mag = 4;
        while (n--) {
            cin >> a ;
            tpow = prep[n];
            tmpS = (a % MOD * curS % MOD) % MOD;
            resS += (tpow % MOD * tmpS % MOD) % MOD;
            resS %= MOD;
            curS += (mag % MOD * a % MOD) % MOD;
            curS %= MOD;
            mag = (mag % MOD * 2) % MOD;
        }
        cout << (resS % MOD) << '\n';
    }
	return 0;
}
