#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector < string > v;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                for (int k = 1; k < n; k++) {
                    int x = j + k;
                    int y = i + k;
                    if (x >= m || y >= n)
                        break;
                    if (v[i][x] == v[i][j] && v[y][x] == v[i][j] && v[y][j] == v[i][j]) {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
