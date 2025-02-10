#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1000000007;

long long modInv(long long a, long long mod) {
    long long result = 1;
    long long power = mod - 2;
    while (power) {
        if (power % 2) {
            result = (result * a) % mod;
        }
        a = (a * a) % mod;
        power /= 2;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector < int > piles(n);
        int nimSum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> piles[i];
            nimSum ^= piles[i];
        }
        long long totalOutcomes = (long long) d * d % MOD;
        long long favorableOutcomes = 0;
        if (nimSum != 0) {
            favorableOutcomes = (long long) d * (d + 1) / 2 % MOD;
        } else {
            favorableOutcomes = (long long) d * (d - 1) / 2 % MOD;
        }
        long long result = (favorableOutcomes * modInv(totalOutcomes, MOD)) % MOD;
        cout << result << endl;
    }

    return 0;
}
