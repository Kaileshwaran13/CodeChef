#include <bits/stdc++.h>

using namespace std;


int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if (odd == 0 && even != 0) {
            cout << "0" <<'\n';
        }
        else if (odd == 1) {
            cout << n << '\n';
        }
        else {
            cout << 1 + even + ((odd - 1) / 2) << '\n';
        }
    }
}
