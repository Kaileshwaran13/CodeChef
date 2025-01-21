#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << ((n & 1) == 0 || k ? "Yes\n" : "No\n");
    }
    return 0;
}
