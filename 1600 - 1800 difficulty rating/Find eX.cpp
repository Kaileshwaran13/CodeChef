#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a + 1) % b == (c + 1) % d) {
            cout << "1" << endl;
            continue;
        }
        int value = lcm(b, d);
        cout << value - (a % b) << endl;
    }
}
