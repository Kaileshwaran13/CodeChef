#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long int ans = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] == 1 || a[i] == 0 || (ans <= 1 && a[i] > 1))
            {
                ans = (ans + a[i]) % MOD;
            }
            else
            {
                ans = (ans * a[i]) % MOD;
            }
        }
        cout << ans << endl;
    }
}
