#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt = 0;
        for (int i = 1; i < n; i++) {
            if (gcd(n, i) == 1) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
