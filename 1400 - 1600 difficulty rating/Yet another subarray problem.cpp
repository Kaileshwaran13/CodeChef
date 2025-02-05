#include <bits/stdc++.h>
using namespace std;

signed main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        for (int i = 1; i <= a; i++) {
            cout << 2 * i - 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
