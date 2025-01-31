#include <iostream>
using namespace std;

int main() {
    int t, n, m, k, x;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k >> x;
        int lot = ((k - 1) * n) + (n + m);
        int times = (x + lot - 1) / lot;
        if ((x - 1) < (lot * times) - (n + m)) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }
    return 0;
}
