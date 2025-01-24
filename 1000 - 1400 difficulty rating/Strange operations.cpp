#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, k, n, a, sum;
    cin >> t;
    while (t--) {
        sum = 0;
        cin >> n >> k;
        for (int i = 0; i < n; ++i) cin >> a, sum += a;
        cout << ((sum & 1) == 0 && k == 1 ? "odd\n" : "even\n");
    }
}
