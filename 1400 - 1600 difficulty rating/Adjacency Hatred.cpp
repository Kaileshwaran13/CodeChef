#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > l(n);
        int odd = 0;
        int even = 0;
        vector < int > o;
        vector < int > e;
        for (int i = 0; i < n; ++i) {
            cin >> l[i];
            if (l[i] % 2) {
                odd++;
                o.push_back(l[i]);
            } else {
                even++;
                e.push_back(l[i]);
            }
        }
        if (odd == 0 || even == 0) {
            cout << -1 << '\n';
            continue;
        }
        for (int i: e) {
            cout << i << " ";
        }
        for (int i: o) {
            cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}
