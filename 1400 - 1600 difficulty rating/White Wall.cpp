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
        string a = "RGB", b = "RBG", c = "GRB", d = "GBR", e = "BRG", f = "BGR";
        int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i % 3] != s[i])
                c1++;
            if (b[i % 3] != s[i])
                c2++;
            if (c[i % 3] != s[i])
                c3++;
            if (d[i % 3] != s[i])
                c4++;
            if (e[i % 3] != s[i])
                c5++;
            if (f[i % 3] != s[i])
                c6++;
        }
        int ans = min(c1, min(c2, min(c3, min(c4, min(c5, c6)))));
        cout << ans << endl;
    }
}
