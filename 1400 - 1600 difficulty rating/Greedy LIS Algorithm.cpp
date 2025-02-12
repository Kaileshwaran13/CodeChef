#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        if (x >= n - 1 && !(x == 0 && n == 1)) {
            cout << -1 << endl;
            continue;
        }
        for (int i = n; i > x + 1; i--) {
            cout << i << " ";
        }
        for (int i = 1; i <= x + 1; i++) {
            cout << i << " ";
        }
        cout << endl;
    }


}
