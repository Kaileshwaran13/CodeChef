#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        long long ans = 0;
        int currfloor = 0;
        for (int i = 0; i < q; i++) {
            int f, d;
            cin >> f >> d;
            ans += abs(currfloor - f) + abs(d - f);
            currfloor = d;
        }
        cout << ans << '\n';
    }

}
