#include<bits/stdc++.h>
using namespace std;
#define CC 1000000007

long long binexp(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1)
            res = (res * a) % CC;
        a = (a * a) % CC;
        b >>= 1;
    }
    return res;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        long long n, m, ans = 1;
        cin >> n >> m;
        ans = binexp(2, n) - 1;
        ans = binexp(ans, m);
        cout << ans << endl;
    }
    return 0;
}
