#include <bits/stdc++.h>
using namespace std;

int main() {
    long t;
    cin >> t;
    long long a[1000001];
    long long mod = 1000000007;
    for (int i = 1; i < 1000001; i++) {
        a[i] = (a[i - 1] + i + (i * a[i - 1])) % mod;
    }
    while (t--) {
        long long n;
        cin >> n;
        cout << a[n] << "\n";
    }
}
