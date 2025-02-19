#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long x, m;
        cin >> x >> m;
        int req = ceil(log2(x)) + 1;
        if (m >= req) {
            cout << m - req + 1 << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}
