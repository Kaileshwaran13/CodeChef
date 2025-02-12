#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        string flag = "NO";
        if (x > 0 && x % 2 == 1 && y >= (-x + 1) && y <= (x + 1)) {
            flag = "YES";
        }
        else if (x < 0 && x % 2 == 0 && y >= x && y <= -x) {
            flag = "YES";
        }
        else if (y <= 0 && y % 2 == 0 && x >= y && x <= -y + 1) {
            flag = "YES";
        }
        else if (y > 0 && y % 2 == 0 && x >= -y && x < y) {
            flag = "YES";
        }
        cout << flag << endl;
    }
}
