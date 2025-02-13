#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (t; t >= 1; t--) {
        int x;
        cin >> x;
        int a = 0, b = 0, c = 0;
        int j = log2(x);
        a = pow(2, j + 1) + x;
        b = x;
        c = x - pow(2, j);
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}
