#include <bits/stdc++.h>
using namespace std;

int main() {
    double T;
    cin >> T;
    while (T--) {
        double h, s;
        cin >> h >> s;
        double aPlusb = pow(h, 2) + 4 * s;
        double aminusb = pow(h, 2) - 4 * s;
        if (aminusb < 0) cout << -1 << endl;
        else {
            aPlusb = sqrt(aPlusb);
            aminusb = sqrt(aminusb);
            double a = (aPlusb + aminusb) / 2.0;
            double b = aPlusb - a;
            cout << fixed << setprecision(6) << b << " " << a << " " << h << endl;
        }
    }
    return 0;
}
