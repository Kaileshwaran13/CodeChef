#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, a, b;
        cin >> k >> a >> b;
        if (abs(b - a) - 1 == k - (abs(b - a) + 1))
        {
            cout << 0 << endl;
            continue;
        }
        cout << min(abs(b - a) - 1, k - (abs(b - a) + 1)) << endl;
    }

}
