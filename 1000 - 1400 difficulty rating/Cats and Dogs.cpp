#include <bits/stdc++.h>
using namespace std;

int main() {
    long t, c, d, l;
    long min = 0, max = 0;
    cin >> t;
    while (t--) {
        cin >> c >> d >> l;
        if (l % 4 != 0) {
            cout << "no" << endl;
        }
        else {
            if (d * 2 > c) {
                min = d * 4;
                max = d * 4 + c * 4;
            }
            else {
                min = (d * 4) + (abs((d * 2) - c)) * 4;
                max = d * 4 + c * 4;
            }

            if (l >= min && l <= max) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
    }

}
