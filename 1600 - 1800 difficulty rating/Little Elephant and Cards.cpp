#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;
int main() {
    long long A[1005][1005];
    A[0][0] = 1;
    for (int i = 1; i < 1005; i++) {
        A[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            A[i][j] = (A[i - 1][j - 1] + A[i - 1][j]) % mod;
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int B[n];
        for (int i = 0; i < n; i++) cin >> B[i];
        long long ans = 0;
        for (int i = 1 + n / 2; i <= n; i++) {
            ans += A[n][i];
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}
