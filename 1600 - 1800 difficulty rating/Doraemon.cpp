#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector < vector < int >> arr(n, vector < int > (m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int x0 = j, x1 = j, y0 = i, y1 = i;
                while (y0 >= 0 && y1 < n && x0 >= 0 && x1 < m && arr[y0][j] == arr[y1][j] && arr[i][x0] == arr[i][x1]) {
                    ans++;
                    y0--;
                    y1++;
                    x0--;
                    x1++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
