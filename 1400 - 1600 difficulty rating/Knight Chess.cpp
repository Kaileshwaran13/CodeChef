#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > x(n);
        vector < int > y(n);
        int a, b;
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }
        cin >> a >> b;
        bool is = false;
        for (int i = 0; i < n; i++) {
            if (x[i] == a) {
                is = true;
            }
            if (y[i] == b) {
                is = true;
            }
        }
        if (is) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
