#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int l, d, s, c;
        cin >> l >> d >> s >> c;
        int ans = s;
        while (d > 1) {
            int temp = ans;
            ans = ans + temp * c;
            d--;
            if (ans >= l) {
                break;
            }
        }
        if (ans >= l) {
            cout << "ALIVE AND KICKING" << endl;
        }
        else {
            cout << "DEAD AND ROTTING" << endl;
        }
    }
    return 0;
}
