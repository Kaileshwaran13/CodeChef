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
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[i] == s[j] && s[i] != '0') {
                    if ((i % 2 != 0 && j % 2 == 0) || (i % 2 == 0 && j % 2 != 0)) {
                        s[i] = '0';
                        s[j] = '0';
                    }
                }
            }
        }
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                flag = 1;
                break;
            }
        }
        if (flag) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }
}
