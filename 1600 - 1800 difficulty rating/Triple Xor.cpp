#include<bits/stdc++.h>
using namespace std;


signed main() {
    long long t = 1;
    cin >> t;
    while (t--) {
        long long  n, k;
        cin >> n >> k;
        long long max = 1 << n;
        cout << (max - 1) * (max - 2) << endl;
    }
    return 0;
}
