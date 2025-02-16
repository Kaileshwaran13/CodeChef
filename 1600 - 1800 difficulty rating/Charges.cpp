#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int d = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                d += 2;
            }
            else {
                d += 1;
            }
        }
        while (k--) {
            int q;
            cin >> q;
            q--;
            if (q > 0) {
                if (s[q - 1] == s[q]) {
                    d--;
                }
                else {
                    d++;
                }
            }
            if ((q + 1) < n) {
                if (s[q] == s[q + 1]) {
                    d--;
                }
                else {
                    d++;
                }
            }
            if (s[q] == '0') {
                s[q] = '1';
            }
            else {
                s[q] = '0';
            }
            cout << d << endl;

        }
    }

}
