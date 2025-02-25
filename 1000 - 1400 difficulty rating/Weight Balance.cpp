#include <iostream>
using namespace std;

int main() {
    int t, a, b, c, d, e;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d >> e;
        int f = b - a;
        int g = c * e;
        int h = d * e;
        if (f >= g && f <= h)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}
