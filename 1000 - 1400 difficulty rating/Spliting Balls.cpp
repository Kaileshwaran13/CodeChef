#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long fac[1000003];
    fac[1] = 1;
    for (long long i = 2; i < 1000003; i++) {
        fac[i] = (i * fac[i - 1]) % 1000000007;
    }
    long long test_case;
    cin >> test_case;
    while (test_case--) {
        long long n, a, ans = 0;
        cin >> n;
        for (long long i = 0; i < n; i++) {
            cin >> a;
            ans = (ans + fac[a]) % 1000000007;
        }
        cout << ans << endl;
    }
    return 0;
}
