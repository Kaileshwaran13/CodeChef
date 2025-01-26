#include <iostream>

using namespace std;

int main() {
    int t, x, y, z;
    cin >> t;
    while (t--) {
        cin >> x >> y >> z;
        int k = (((2 * z) + x) - y);
        if (k < 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
