#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n >= 65) {
            cout << "NO" << endl;
            continue;
        }
        set < int > s;
        for (int i = 0; i < n; i++) {
            int x = 0;
            for (int j = i; j < n; j++) {
                x |= a[j];
                s.insert(x);
            }
        }
        if (s.size() == (n * (n + 1)) / 2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
