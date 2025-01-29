#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int count = 0;
        if (n % k == 0) {
            cout << n / k << endl;
        }
        else if (n % k != 0 && (n % k) < k) {
            cout << -1 << endl;
        }
    }
}
