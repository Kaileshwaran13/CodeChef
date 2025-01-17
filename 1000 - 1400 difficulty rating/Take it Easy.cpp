#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int totcand = 0;
        for (int i = 0; i < n; i++) {
            totcand += v[i];
        }
        if (totcand % n != 0) {
            cout << "NO" << '\n';
            continue;
        }
        int targetcand = totcand / n;
        bool possible = true;
        for (int i = 0; i < n; i++) {
            if ((v[i] - targetcand) % 2 != 0) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}
