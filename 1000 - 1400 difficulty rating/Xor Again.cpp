#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n = 0;
        cin >> n;
        int size = n;
        int xorb = 0;
        while (size--) {
            int a = 0;
            cin >> a;
            if (size == n) {
                xorb = 2 * a;
            }
            else {
                xorb ^= (2 * a);
            }
        }

        cout << xorb << endl;
    }
    return 0;
}
