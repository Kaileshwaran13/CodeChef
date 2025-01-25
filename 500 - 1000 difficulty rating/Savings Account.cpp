#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int total_money = x * y;
        if (total_money > z) {
            // start reducing 1 each time...
            int count = 0;
            while (true) {
                x -= 1;
                count++;
                if (x * y <= z) {
                    break;
                }
            }
            cout << count << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
