#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        char l[n], r[n];
        for (int i = 0; i < n; i++) {
            l[i] = s[i + 1];
            r[i] = s[i - 1];
        }
        l[n - 1] = s[0];
        r[0] = s[n - 1];
        for (int i = 0; i < n; i++) {
            if (l[i] != r[i]) {
                cout << "NO" << '\n';
                break;
            }
            else if (i == n - 1) {
                cout << "YES" << '\n';
            }
        }
    }
}
