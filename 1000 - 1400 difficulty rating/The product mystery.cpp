#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int b, c;
        cin >> b >> c;

        int x = gcd(b, c);
        int a = c / x;

        cout << a << endl;
    }

    return 0;
}
