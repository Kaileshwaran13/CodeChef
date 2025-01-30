#include <iostream>

using namespace std;

int main() {
    int t, d, c, a, as, b, bs;
    cin >> t;
    while (t--) {
        cin >> d >> c;
        as = bs = 0;
        for (int i = 0; i < 3; ++i) 
            cin >> a, as += a;
        for (int i = 0; i < 3; ++i) 
            cin >> b, bs += b;
        cout << ((as >= 150 && bs >= 150 && (c < 2 * d)) || (c < d && (as >= 150 || bs >= 150)) ? "YES" : "NO") << '\n';
    }
    return 0;
}
