#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        int steps1 = p / a;
        int steps2 = q / b;
        if (abs(steps2 - steps1) <= 1 && p % a == 0 && q % b == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
