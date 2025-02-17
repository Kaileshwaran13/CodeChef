#include <bits/stdc++.h>
#define m 1000000007
using namespace std;

int main() {
    long long a[5001][5001] = {0};
    for (long long i = 1; i <= 5000; i++) {
        a[i][0] = 1;
        a[i][1] = i;
        for (long long j = 2; j <= 5000; j++) {
            a[i][j] = (a[i - 1][j] + a[i - 1][j - 1]) % m;
        }
    }
    while (true) {
        long long n, k;
        cin >> n >> k;
        if (n == 0 && k == 0) {
            break;
        }
        cout << (2 * (a[n - 2][k / 2] * a[n - 2][(k - 1) / 2]) % m) % m << endl;
    }


}
