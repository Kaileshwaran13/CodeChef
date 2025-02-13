#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T != 0) {
        long long n, m, l;
        cin >> n >> m >> l;
        if (n == 0 || m == 0) {
            cout << m << endl;
        }
        else {
            long long remain = m % (l + n - 1);
            if (remain >= l) {
                cout << 0 << endl;
            }
            else {
                cout << remain << endl;
            }
        }
        T--;
    }
    return 0;
}
