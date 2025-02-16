#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cout << fixed << setprecision(6);
    while (t--) {
        double d1, d2, d;
        cin >> d1 >> d2 >> d;
        if (d1 + d2 >= d) {
            if (max(d1, d2) <= d + min(d1, d2))
                cout << 0.000000 << endl;
            else 
                cout << max(d1, d2) - d - min(d1, d2) << endl;
        }
        else 
            cout << (d - d1 - d2) << endl;
    }
}
