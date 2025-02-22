#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long ans = 0;
        for (long long i = 0; i < n; i++) {
            long long att = 0, def = 0;
            for (long long j = 0; j <= i; j++)
                def += (1000 - a[j]);
            for (long long j = i + 1; j < n; j++)
                att += a[j];
            ans = max(ans, att * def);
        }
        cout << ans << '\n';
    }
    return 0;
}
