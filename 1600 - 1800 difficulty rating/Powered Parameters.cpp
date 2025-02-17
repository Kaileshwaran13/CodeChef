#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector < long long > v(n);
        for (auto & i: v) cin >> i;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long left = v[i];
            if (v[i] == 1) 
                ans += n;
            else {
                long long power = 1;
                for (int j = 0; j < n; j++) {
                    if (left * power > 1e9 + 10) break;
                    else {
                        power = left * power;
                        if (power <= v[j]) ans++;
                    }
                }
            }
        }
        cout << ans << '\n';
    }
}
