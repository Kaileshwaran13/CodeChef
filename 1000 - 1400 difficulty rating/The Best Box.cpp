#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double p, s;
        cin >> p >> s;
        double b = (p - sqrt(p * p - 24 * s)) / 12;
        double l = (p - 8 * b) / 4;
        double vol = (l * b * b);
        cout << fixed << setprecision(2) << vol << endl;
    }
    return 0;
}
