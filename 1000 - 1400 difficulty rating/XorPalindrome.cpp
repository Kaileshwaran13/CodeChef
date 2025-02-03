#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int o = 0, z = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                o++;
            } else {
                z++;
            }
        }
        if (n % 2 != 0) {
            cout << "YES" << endl;
        } else {
            if (z == o || z == n || o == n || (z % 2 == 0 && o % 2 == 0)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

}
