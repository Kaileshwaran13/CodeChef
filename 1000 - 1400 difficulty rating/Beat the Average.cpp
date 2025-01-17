#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        if (y <= z) {
            cout << 0 << endl;
        }
        else {
            long long a = x * z;
            long long b = a / (z + 1);
            cout << b << '\n';
        }

    }
}
