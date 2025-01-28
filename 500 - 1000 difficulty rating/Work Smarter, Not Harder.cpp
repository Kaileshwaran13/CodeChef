#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, v1, v2;
        cin >> l >> v1 >> v2;
        int htime = ceil(l * 1.0 / v2);
        int ttime = ceil(l * 1.0 / v1);
        if (htime >= ttime) {
            cout << -1 << endl;
        }
        else {
            cout << ttime - htime - 1 << endl;
        }
    }
    return 0;
}
