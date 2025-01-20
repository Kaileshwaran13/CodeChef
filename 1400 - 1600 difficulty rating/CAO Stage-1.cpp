#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector < string > v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ans = 0;
        for (int i = 2; i < n - 2; i++) {
            for (int j = 2; j < m - 2; j++) {
                bool l = false, r = false, t = false, b = false;
                if (v[i][j] == '^') {
                    if (v[i - 1][j] == '^' && v[i - 2][j] == '^')
                        t = true;
                    if (v[i + 1][j] == '^' && v[i + 2][j] == '^')
                        b = true;
                    if (v[i][j - 1] == '^' && v[i][j - 2] == '^')
                        l = true;
                    if (v[i][j + 1] == '^' && v[i][j + 2] == '^')
                        r = true;
                    if (t && b && l && r)
                        ans++;
                }
            }
        }
        cout << ans << '\n';
    }
}
