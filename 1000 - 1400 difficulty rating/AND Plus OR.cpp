#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        if (x == 0)
            cout << -1 << endl;
        else
            cout << 0 << " " << x << '\n';
    }
}
