#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int r, g, b;
        cin >> r >> g >> b;
        if (r <= (g + b) and g <= (r + b) and b <= (r + g))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}
