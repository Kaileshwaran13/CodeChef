#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector < string > a(n);
        vector < bool > row(n, false);
        vector < bool > col(m, false);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int countZero = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '1') {
                    row[i] = true;
                    col[j] = true;
                }
                else
                    countZero++;
            }
        }
        if (countZero == n * m) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << -1 << " ";
                }
                cout << endl;
            }
            continue;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '1')
                    cout << 0 << " ";
                else if (row[i] || col[j])
                    cout << 1 << " ";
                else
                    cout << 2 << " ";
            }
            cout << endl;
        }

    }

}
