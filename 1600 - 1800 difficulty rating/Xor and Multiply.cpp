#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, A, B;
        cin >> n >> A >> B;
        int x = 0;
        for (int i = n - 1; i >= 0; i--) {
            bool isAbitset = ((A & (1 << i)) != 0);
            bool isBbitset = ((B & (1 << i)) != 0);

            if ((isAbitset && isBbitset) || (!isAbitset && !isBbitset)) {
                if (!isAbitset) x = (x | (1 << i));
            }
            else {
                int a = (A ^ x);
                int b = (B ^ x);
                if (a < b) {
                    if (!isAbitset) x = (x | (1 << i));
                }
                else {
                    if (!isBbitset) x = (x | (1 << i));
                }
            }
        }
        cout << x << endl;
    }
    return 0;
}
