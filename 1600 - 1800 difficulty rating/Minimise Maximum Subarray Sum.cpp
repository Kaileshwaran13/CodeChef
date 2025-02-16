#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double x, y;
        cin >> x >> y;
        int a = ceil(x / (y + 1.0));
        int b = x - 2 * y;
        cout << max(a, b) << endl;
    }
    return 0;
}
