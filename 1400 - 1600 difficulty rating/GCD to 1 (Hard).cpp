#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x = min(n, m);
        vector < vector < int >> mat(n, vector < int > (m, 0));
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (i != j)
                    mat[i][j] = 2;

                else
                    mat[i][j] = 3;
            }
        }
        if (n < m)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = n; j < m; j++)
                {
                    if (i == 0)
                        mat[i][j] = 3;

                    else
                        mat[i][j] = 2;
                }
            }
        }
        else if (n > m)
        {
            for (int i = m; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (j == 0)
                        mat[i][j] = 3;

                    else
                        mat[i][j] = 2;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
}
