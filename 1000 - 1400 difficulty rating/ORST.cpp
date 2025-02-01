#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1, k = 0;
    cin >> t;
    while (t--) {
        long long n, i, j, sum = 0, c = 0, m;
        cin >> n >> m;
        long long A[n], B[m];
        for (i = 0; i < n; i++)
            cin >> A[i];
        for (i = 0; i < m; i++)
            cin >> B[i];

        for (i = 0; i < m; i++)
        {
            c = max(c, B[i]);
        }
        sort(A + n - c, A + n);
        for (i = 0; i < n; i++)
            cout << A[i] << ' ';
        cout << '\n';

    }
    return 0;
}
