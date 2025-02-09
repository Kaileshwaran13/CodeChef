#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long dif = abs(x - y);
        if (dif >= 2) {
            if (x > y) cout << "Chef\n";
            else cout << "Chefina\n";
        }
        else {
            if (x == y) {
                if (x % 2) cout << "Chef\n";
                else cout << "Chefina\n";
            }
            else {

                long long mn = min(x, y);
                if (mn % 2) cout << "Chef\n";
                else cout << "Chefina\n";

            }
        }
    }
    return 0;
}
