#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        vector < vector < int >> v(n + 1, vector < int > (m + 1, 0));
        v[x1][y1] = 1;
        v[x2][y2] = 2;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if ((i == x1 && j == y1) || (i == x2 && j == y2)) continue;
                if ((i + j) % 2 == (x1 + y1) % 2)
                {
                    v[i][j] = 1;
                }
                else
                {
                    if ((x1 + y1) % 2 != (x2 + y2) % 2)
                    {
                        v[i][j] = 2;
                    }
                    else
                    {
                        v[i][j] = 3;
                    }
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}
