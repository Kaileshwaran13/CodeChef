#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int arr[501][501];
        int n;
        cin >> n;
        int sumr = 0, sumc = 0, isfalsecol = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 0) {
                    sumr++;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j][i] == 0) {
                    sumc++;
                    break;
                }
            }
        }
        if (sumc >= n && sumr >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
