#include <bits/stdc++.h>
using namespace std;

signed main() {
    int t = 1;
    while (t--) {
        int n;
        double k;
        cin >> n >> k;
        cout << fixed << setprecision(2);
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int max = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += A[i];
            if (sum < 0) {
                sum = 0;
                continue;
            }
            if (sum >= max) {
                max = sum;
            }
        }
        int a = 0;
        for (int i = 0; i < n; i++) {
            a += A[i];
        }
        double x = a - max + (double) max / k;
        cout << x << endl;
    }
    return 0;
}
