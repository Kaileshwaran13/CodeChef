#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t, l, r, m, w;
    cin >> t;
    while (t--) {
        cin >> l >> r >> m;
        w = (m / l) + (m / r);
        if (m % l != 0)
            w++;
        cout << w << endl;
    }
    return 0;
}
