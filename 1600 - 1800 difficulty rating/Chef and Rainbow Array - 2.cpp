#include<bits/stdc++.h>

#define ll long long int
#define mod 1000000007
using namespace std;
int comb[1000005][7];

int main() {
    int n;
    cin >> n;
    if (n < 13)
        cout << 0 << endl;
    else {
        n = n + 1;
        n /= 2;
        n--;
        ll ans = 1;
        int i, j;
        for (i = 1; i <= n + 1; i++) {
            for (j = 1, comb[i][0] = 1; j <= 6; j++) comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % mod;
        }
        ans = comb[n + 1][6];
        cout << ans << endl;
    }
    cerr << "Time : " << 1000 * ((double) clock()) / CLOCKS_PER_SEC << "ms" << endl;
    return 0;
}
