#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t != 0) {
        t--;
        long n, m;
        cin >> n >> m;
        if (n % 2 != 0 && m % 2 != 0) {
            cout << "No" << endl;
        }
        else if ((n == 1 && m != 2) || (m == 1 && n != 2)) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
