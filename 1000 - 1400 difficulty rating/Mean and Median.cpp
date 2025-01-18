#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c, x, y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        b = y;
        if (b >= 0) {
            c = 500;
            a = 3 * x - b - c;
        } else {
            a = -500;
            c = 3 * x - b - a;
        }
        cout << a << ' ' << b << ' ' << c;
    }
}
