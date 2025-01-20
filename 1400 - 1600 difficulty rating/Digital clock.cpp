#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, h, m;
    cin >> t;
    while (t--) {
        cin >> h >> m;
        int l = min(h, m);
        int u = max(h, m);
        cout << min(l, 10) + min((u - 1) / 11, (l - 1)) + min(((l - 1) / 11) * 2, u - 1) << '\n';
    }
}
