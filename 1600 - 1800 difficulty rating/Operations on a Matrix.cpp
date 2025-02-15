#include<bits/stdc++.h>
using namespace std;

#define ll  long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        int A[n] = {0}, B[m] = {0};
        int reven = 0, rodd = 0, ceven = 0, codd = 0;
        for (int i = 0; i < q; i++) {
            int x, y;
            cin >> x >> y;
            A[x - 1]++;
            B[y - 1]++;
        }
        for (int i = 0; i < n; i++) {
            if (A[i] % 2 == 0) reven++;
            else rodd++;
        }
        for (int i = 0; i < m; i++) {
            if (B[i] % 2 == 0) ceven++;
            else codd++;
        }
        ll ans = 1ll * reven * codd;
        ans += 1ll * rodd * ceven;
        cout << ans << endl;
    }
    return 0;
}
