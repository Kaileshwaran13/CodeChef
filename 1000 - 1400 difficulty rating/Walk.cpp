#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long int ans = 0, k;
        for (int i = 0; i < n; i++) {
            cin >> k;
            if (ans < k + i) {
                ans = k + i;
            }
        }
        cout << ans << '\n';
    }
}
