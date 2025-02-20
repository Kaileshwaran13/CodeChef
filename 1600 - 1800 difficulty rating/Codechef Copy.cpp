#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string c = "codechef";
        for (int i = 0; i < 8; i++) {
            if (s[i] == c[i]) {
                for (int j = 0; j < 8; j++) {
                    if (i != j && s[i] != c[j] && s[j] != c[i]) {
                        swap(s[i], s[j]);
                    }
                }
            }
        }
        bool valid = true;
        for (int i = 0; i < 8; i++) {
            if (s[i] == c[i])
                valid = false;
        }
        if (valid) cout << s << endl;
        else cout << -1 << endl;
    }
    return 0;
}
