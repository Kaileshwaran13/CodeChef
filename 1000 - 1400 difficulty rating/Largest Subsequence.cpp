#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == s[n - 1]) {
            cout << n << "\n";
        }
        else {
            int u1 = 0, u2 = 0;
            char x = s[0];
            for (int i = 0; i < n; i++) {
                if (x != s[i]) {
                    break;
                }
                u1++;
            }
            for (int i = n - 1; i >= 0; i--) {
                if (x == s[i]) {
                    break;
                }
                u2++;
            }
            cout << n - min(u1, u2) << "\n";
        }
    }
    return 0;
}
