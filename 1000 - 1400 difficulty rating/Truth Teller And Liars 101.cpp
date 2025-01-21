#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (m > n) {
            cout << "-1\n";
        }
        else if (n > m) {
            cout << (2 * m + 1) << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}
