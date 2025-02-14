#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        sort(A, A + n);
        int lim = A[n - 1] + A[n - 2];
        int i = 0, j = n - 1;
        vector < int > ans(n);
        int start = 0;
        while (i <= j) {
            if (i == j) {
                ans[start] = A[i];
                i++;
                j--;
            }
            else {
                ans[start] = A[j];
                j--;
                start++;
                ans[start] = A[i];
                i++;
                start++;
            }
        }
        int f = 0;
        for (int i = 1; i < n; ++i) {
            int tot = ans[i] + ans[i - 1];
            if (tot >= lim) {
                f = 1;
                break;
            }
        }
        if (f) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
