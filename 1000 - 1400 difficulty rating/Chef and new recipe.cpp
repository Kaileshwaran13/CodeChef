#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        long long sum = 0;
        int con = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] >= 2) {
                sum += a[i];
            }
            else {
                con = 1;
            }
        }
        if (con == 0) {
            sort(a, a + n);
            sum = sum - a[0] + 2;
        }
        if (n == 1 && con == 0) 
            cout << 2 << endl;
        else if (con == 0 && n != 1) 
            cout << sum << endl;
        else 
            cout << -1 << endl;
    }
    return 0;
}
