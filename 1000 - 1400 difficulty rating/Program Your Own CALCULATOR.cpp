#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    char z;
    cin >> x >> y >> z;
    if (z == '+') {
        cout << x + y << '\n';
    }
    else if (z == '-') {
        cout << x - y << '\n';

    }
    else if (z == '*') {
        cout << x * y << '\n';
    }
    else if (z == '/') {
        if (x != 0) {
            cout << fixed << setprecision(7) << double(x) / y << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }
}
