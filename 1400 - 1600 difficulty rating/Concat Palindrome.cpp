#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s, p;
        cin >> s >> p;
        int f = 0;
        if (n == m) {
            sort(s.begin(), s.end());
            sort(p.begin(), p.end());
            reverse(p.begin(), p.end());
            for (int i = 0; i < n; ++i) {
                if (s[i] != p[n - 1 - i]) {
                    f = 1;
                    break;
                }
            }
        }
        else {
            if (n < m) {
                swap(s, p);
                swap(n, m);
            }
            vector < int > fre1(26), fre2(26);
            for (auto & x: s) fre1[x - 'a']++;

            for (int i = 0; i < m; ++i) {
                fre2[p[i] - 'a']++;
            }

            for (int i = 0; i < 26; ++i) {
                if (fre1[i] < fre2[i]) {
                    f = 1;
                    break;
                }
                fre1[i] -= fre2[i];
            }
            if (f == 0) {
                int c = 0;
                for (auto & x: fre1) {
                    if (x % 2) c++;
                    if (c > 1) {
                        f = 1;
                        break;
                    }
                }
            }
        }
        if (f == 0) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
}
