#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p;
        cin >> p;
        int i = (p / 100) + (p % 100);
        if (i <= 10) {
            cout << i << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
