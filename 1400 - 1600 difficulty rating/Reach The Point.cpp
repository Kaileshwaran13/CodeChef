#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        x = abs(x);
        y = abs(y);
        long long stp = 2 * min(x, y) + 2 * abs(x - y) + (x - y) % 2;
        cout << stp << endl;
    }
    return 0;
}
