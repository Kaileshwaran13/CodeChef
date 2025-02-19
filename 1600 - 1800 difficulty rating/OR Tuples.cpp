#include <bits/stdc++.h>
using namespace std;

int main() {
    long long mod = 1000000007;
    int t;
    cin >> t;
    while (t--)
    {
        int p, q, r;
        cin >> p >> q >> r;
        long long ans = 1;
        for (int i = 0; i < 21; i++)
        {
            if (p % 2 == 1 && q % 2 == 1 && r % 2 == 0) {
                ans *= 1;
            }
            else if (p % 2 == 1 && q % 2 == 0 && r % 2 == 1) {
                ans *= 1;
            }
            else if (p % 2 == 0 && q % 2 == 1 && r % 2 == 1) {
                ans *= 1;
            }
            else if (p % 2 == 0 && q % 2 == 0 && r % 2 == 0) {
                ans *= 1;
            }
            else if (p % 2 == 1 && q % 2 == 1 && r % 2 == 1) {
                ans *= 4;
            }
            else {
                ans = 0;
                break;
            }
            p = p / 2;
            q = q / 2;
            r = r / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
