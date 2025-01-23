#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, maxSum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++) {
            maxSum += a[i];
        }
        cout << (2 * maxSum) - a[0] - a[1] << endl;
    }

    return 0;
}
