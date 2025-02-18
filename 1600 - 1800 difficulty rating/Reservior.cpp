#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int flag = 1;
        vector < vector < char >> v(n, vector < char > (m));
        for (auto & arr: v) {
            for (auto & it: arr) {
                cin >> it;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i + 1 < n && v[i][j] == 'B' && v[i + 1][j] != 'B') {
                    flag = 0;
                    break;
                }
                if (v[i][j] == 'W') {
                    if ((j + 1 < m && v[i][j + 1] == 'A') || (j - 1 >= 0 && v[i][j - 1] == 'A') || (i + 1 < n && v[i + 1][j] == 'A')) {
                        flag = 0;
                        break;
                    }
                    if (i == n - 1 || j == 0 || j == m - 1) {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        cout << (flag ? "yes\n" : "no\n");
    }
}
