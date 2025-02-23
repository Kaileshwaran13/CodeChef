#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector < int > a(n);
        for (auto & i: a) cin >> i;
        vector < vector < int >> allPrefix;
        vector < int > prefix(64, 0);
        allPrefix.push_back(prefix);
        for (auto & i: a) {
            for (int j = 0; j <= 63; j++) {
                int mask = 1LL << j;
                if (mask > i)  
                    break;
                else if (mask & i) {
                    prefix[j]++;
                }
            }
            allPrefix.push_back(prefix);
        }
        while (q--) {
            int k, l1, r1, l2, r2;
            cin >> k >> l1 >> r1 >> l2 >> r2;
            int setBit1 = allPrefix[r1][k] - allPrefix[l1 - 1][k];
            int notSetBit1 = r1 - l1 + 1 - setBit1;
            int setBit2 = allPrefix[r2][k] - allPrefix[l2 - 1][k];
            int notSetBit2 = r2 - l2 + 1 - setBit2;
            int ans1 = setBit1 * notSetBit2;
            int ans2 = setBit2 * notSetBit1;
            cout << (ans1 + ans2) << endl;
        }
    }
}
