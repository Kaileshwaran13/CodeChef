#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        if (n == 1 && m > 2) {
            cout << k << endl;
        }
        if (n > 2 && m == 1) {
            cout << k << endl;
        }
        if (n == 1 && m <= 2) {
            cout << 0 << endl;;
        }
        if (n <= 2 && m == 1) {
            cout << 0 << endl;
        }
        if (n >= 2 && m >= 2) {
            if (k % 2 == 0) {
                cout << k / 2 << endl;
            }
            else {
                cout << (k / 2) + 1 << endl;
            }
        }
    }
    return 0;
}
