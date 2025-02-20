#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        long long l = x / 2, r = l;
        if (x % 2) l++;
        long long l1, r1;
        for (int i = 1; i * i <= y; i++) {
            if (y % i == 0) {
                l1 = i;
                r1 = y / i;
            }
        }
        if ((r >= l1 && r <= r1) || (l >= l1 && l <= r1)) {
            cout << -1 << endl;
        }
        else {
            cout << r << " " << l << '\n';
            cout << l1 << " " << r1 << '\n';
        }
    }
    return 0;
}
