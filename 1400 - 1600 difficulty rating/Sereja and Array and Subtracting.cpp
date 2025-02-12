#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, gcd, x, temp;
        cin >> n;
        cin >> gcd;
        for (i = 1; i < n; i++) {
            cin >> x;
            while (x % gcd != 0) {
                temp = x;
                x = gcd;
                gcd = temp % x;
            }
        }
        cout << long(gcd) * long(n) << endl;
    }
    return 0;
}
