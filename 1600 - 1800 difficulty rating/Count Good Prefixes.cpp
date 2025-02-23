#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int sum[1005];
    char s[1005];
    cin >> t;
    while (t--) {
        int n, l;
        scanf("%s", s + 1);
        cin >> n;
        l = strlen(s + 1);
        for (int i = 1; i <= l; i++) {
            sum[i] = sum[i - 1] + (s[i] == 'a' ? 1 : -1);
        }
        long long ans = 0;
        for (int i = 1; i <= l; i++) {
            if (sum[l] == 0) {
                if (sum[i] > 0) ans += n;
            } else if (sum[l] > 0) {
                int k = floor((-sum[i]) * 1.0 / sum[l]);
                ans += max(0, n - 1 - max(-1, k));
            } else {
                int k = ceil((-sum[i]) * 1.0 / sum[l]);
                ans += max(0, min(k, n));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
