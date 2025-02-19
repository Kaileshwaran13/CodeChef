#include <iostream>
using namespace std;


long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    long long MOD = 100000007;
    long long inv2 = modExp(2, MOD - 2, MOD);
    while (t--) {
        long long N;
        cin >> N;
        long long p2 = modExp(2, N, MOD);
        long long p3 = modExp(3, N, MOD);
        long long p4 = modExp(4, N, MOD);
        long long R1 = ((p3 - (2 * p2) % MOD + MOD) % MOD + 1) % MOD;
        R1 = (R1 * inv2) % MOD;
        long long R2 = ((p4 - (3 * p3) % MOD + MOD) % MOD + (3 * p2) % MOD) % MOD;
        R2 = ((R2 - 1) % MOD + MOD) % MOD;
        R2 = (R2 * inv2) % MOD;
        cout << R1 << " " << R2 << "\n";
    }

    return 0;
}
