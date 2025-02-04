#include<bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        int n = 3, arr[3][3];
        long long maxrow = -1, rowsum = 0, maxcol = -1, colsum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[0][i];
        }
        for (int i = 0; i < n; i++) {
            cin >> arr[1][i];
        }
        for (int i = 0; i < n; i++) {
            cin >> arr[2][i];
        }
        for (int i = 0; i < n; i++)
        {
            long long rowsum = 0;
            long long colsum = 0;
            for (int j = 0; j < n; j++) {
                rowsum += arr[i][j];
                colsum += arr[j][i];
            }
            if (maxrow < rowsum) {
                maxrow = rowsum;
            }
            if (maxcol < colsum) {
                maxcol = colsum;
            }
        }
        long long p = max(maxrow, maxcol);
        if (p == 0) {
            cout << 0 << endl;
        }
        else{
            if (p % 2 == 0)
                cout << p - 1 << endl;
            else
                cout << p << endl;
        }
    }
    return 0;
}
