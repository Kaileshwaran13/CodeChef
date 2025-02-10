#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int v[n];
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v, v + n);
        int ans = k / v[0];
        if (k % v[0] != 0) {
            ans++;
        }
        cout << max(n, ans) << endl;
    }
    return 0;
}
