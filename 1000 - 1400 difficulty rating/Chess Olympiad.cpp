#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    double t1 = x + 0.5 * y + 4 - (x + y + z);
    double t2 = 0.5 * y + z;
    if (t1 > t2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
