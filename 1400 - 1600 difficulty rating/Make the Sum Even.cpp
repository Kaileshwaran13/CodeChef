#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        long long sum = 0, num = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 0) {
            cout << 0 << endl;
        }
        else {
            if (count(a, a + n, 2) >= 1) {
                cout << 1 << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
