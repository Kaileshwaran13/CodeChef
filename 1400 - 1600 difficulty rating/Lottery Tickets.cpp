#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int x = a[0];
        sort(a.begin(), a.end());
        int y = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                y = i;
                break;
            }
        }
        int ans = 0;
        if (y == 0) {
            ans += a[y] - 1;
        }
        if (y > 0) {
            int left = (a[y - 1] + a[y] + 1) / 2;
            ans += max(0, a[y] - left);
        }
        if (y < n - 1) {
            int right = (a[y] + a[y + 1]) / 2;
            ans += max(0, right - a[y]);
        }
        if (y == n - 1) {
            ans += 1000000 - a[y];
        }
        cout << ans + 1 << endl;
    }
    return 0;
}
