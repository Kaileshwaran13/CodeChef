#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        while (n >= 3) {
            if (n % 4 == 0) {
                n = 0;
                break;
            }
            n -= 3;
        }

        cout << (n == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}
