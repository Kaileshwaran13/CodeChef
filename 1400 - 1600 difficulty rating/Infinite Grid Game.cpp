#include <bits/stdc++.h>

using namespace std;

int arr[1001][1001];

int main() {
    int N = 1001;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] == 0)
            {
                int k = 1;
                while (j + k < N)
                {
                    arr[i][j + k] = 1;
                    arr[j + k][i] = 1;
                    k++;
                }
                k = 1;
                while (i + k < N)
                {
                    arr[i + k][j] = 1;
                    arr[j][i + k] = 1;
                    k++;
                }
                k = 1;
                while (i + k < N && j + k < N)
                {
                    arr[i + k][j + k] = 1;
                    k++;
                }
                break;
            }
        }
    }
    arr[0][0] = 1;
    int t;
    cin >> t;
    while (t--) {
        int m, n, p, q;
        cin >> m >> n >> p >> q;

        int x = abs(p - m);
        int y = abs(q - n);

        if (arr[x][y] == 0) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }
}
