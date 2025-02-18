#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 1];
        a[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                i++;
            }
        }
        cout << (is_sorted(a, a + n + 1) ? "YES\n" : "NO\n");
    }
}
