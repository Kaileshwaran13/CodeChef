#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int x = c / b;
        int r = c % b;
        if (x < a) {
            cout << x * b * b + r * r << '\n';
        }
        else {
            cout << a * b * b << '\n';
        }
    }
}
