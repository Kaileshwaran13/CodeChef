#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int h, l, w;
    while (t--) {
        cin >> h;
        cin >> l;
        cin >> w;
        int ans = 2 * ((h * w) + (w * l) + (h * l));
        cout << 1000 / ans << endl;
    }

}
