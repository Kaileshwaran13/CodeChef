#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > c(n + 1), h(n + 1), d(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> c[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> h[i];
        }
        for (int i = 1; i <= n; i++) {
            int left = max(1, i - c[i]);
            int right = min(n, i + c[i]);
            d[left]++;
            if (right + 1 <= n) {
                d[right + 1]--;
            }
        }
        for (int i = 1; i <= n; i++) {
            d[i] += d[i - 1];
        }
        sort(d.begin() + 1, d.end());
        sort(h.begin() + 1, h.end());
        bool possible = true;
        for (int i = 1; i <= n; i++) {
            if (d[i] != h[i]) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
