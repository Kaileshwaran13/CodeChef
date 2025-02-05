#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n, m, c1 = 0, c2 = 0, l;
    cin >> n >> m;

    vector < vector < int >> v(n, vector < int > (m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    }
    cin >> l;
    for (int i = 0; i < l; i++) {
        int x, y;
        cin >> x >> y;
        if ((x - 1) >= n || (y - 1) >= m)
            c1 = -1;
        if (c1 != -1)
            c1 += v[x - 1][y - 1];
        if ((y - 1) >= n || (x - 1) >= m)
            c2 = -1;
        if (c2 != -1)
            c2 += v[y - 1][x - 1];
    }
    cout << max(c1, c2) << endl;
    return 0;
}
