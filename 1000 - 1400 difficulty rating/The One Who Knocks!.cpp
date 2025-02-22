#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        if (x == y) {
            cout << 0 << endl;
        }
        else {
            if (y > x) {
                if ((abs(y - x)) % 2 != 0) {
                    cout << 1 << endl;
                }
                else if ((abs(y - x)) % 4 == 0) {
                    cout << 3 << endl;
                }
                else {
                    cout << 2 << endl;
                }
            }
            else {
                long long diff = x - y;
                if (diff % 2 != 0) {
                    cout << 2 << endl;
                }
                else 
                    cout << 1 << endl;
            }
        }
    }
}
