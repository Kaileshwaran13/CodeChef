#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int r = x / 3;
        int rem = x % 3;
        int diff = ((r + 1) * 3) - x;
        if (r <= n && rem == 0) {
            cout << "YES" << endl;
            cout << r << " " << 0 << " " << n - r << endl;
        }
        else if ((r + 1) + diff <= n) {
            cout << "YES" << endl;
            cout << r + 1 << " " << diff << " " << n - ((r + 1) + diff) << endl;
        }
        else
            cout << "NO" << endl;
    }

}
