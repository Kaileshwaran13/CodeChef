#include <bits/stdc++.h>

using namespace std;
#define MOD 1000000007

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int ans = 1;
        long long int a = 2;
        while (n != 0)
        {
            if (n % 2 == 1) ans *= a;
            a *= a;
            a %= MOD;
            ans %= MOD;
            n /= 2;
        }
        ans--;
        cout << ans << endl;
    }
}
