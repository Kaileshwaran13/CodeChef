#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

int main() {
    int t, n, a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }
        cout << (((sum) % MOD) * ((sum - 1) % MOD)) % MOD << '\n';
    }
}
