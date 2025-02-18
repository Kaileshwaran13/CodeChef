#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector < string > v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector < vector < int >> vis(n, vector < int > (m));
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                if (v[i][j] == '#' || v[i][j + 1] == '#' || v[i + 1][j] == '#' || v[i + 1][j + 1] == '#')
                    continue;
                vis[i][j] = vis[i + 1][j] = vis[i][j + 1] = vis[i + 1][j + 1] = 1;
            }
        }
        int f = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] == '.' && !vis[i][j]) {
                    f = 0;
                    break;
                }
            }
        }
        cout << (f ? "YES\n" : "NO\n");
    }
}
