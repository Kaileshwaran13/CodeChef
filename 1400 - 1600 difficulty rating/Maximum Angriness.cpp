#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long no = n / 2;

        if (n == 1) {
            cout << 0 << '\n';
        }
        else if (no <= k) {
            long long ans = n * (n - 1);
            cout << ans / 2 << '\n';
        }
        else if (no > k) {
            long long ans = (n * (n - 1)) / 2;
            long long me = n - (2 * k);
            long long sum_me = (me * (me - 1)) / 2;
            ans = ans - sum_me;
            cout << ans << '\n';
        }
    }
}
