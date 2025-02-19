#include<bits/stdc++.h>
using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector < string > mat(n);
        for (int i = 0; i < n; ++i) {
            cin >> mat[i];
        }
        int maxx = -1, maxy = -1, minx = INT_MAX, miny = INT_MAX;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (mat[i][j] == '*') {
                    maxx = max(maxx, i);
                    maxy = max(maxy, j);
                    minx = min(minx, i);
                    miny = min(miny, j);
                }
            }
        }
        int result = INT_MAX;
        if (maxx == -1) {
            cout << 0 << "\n";
            continue;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int temp = 0;
                temp = max(temp, abs(i - maxx));
                temp = max(temp, abs(i - minx));
                temp = max(temp, abs(j - maxy));
                temp = max(temp, abs(j - miny));
                result = min(result, temp + 1);
            }
        }
        cout << result << "\n";
    }
    return 0;
}
