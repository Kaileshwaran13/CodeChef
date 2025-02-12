#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long int

int solve(int a, int n) {
    int ans = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            ans = (a * (1 ll) * ans) % mod;
        }
        a = (a * (1 ll) * a) % mod;
        n /= 2;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << (k * 1 LL * solve(k - 1, n - 1)) % mod << endl;
    }
}
