#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector < char > v(6);
        for (int i = 0; i < 6; i++) {
            cin >> v[i];
        }
        string ans = "NO";
        for (int i = 0; i < 6; i++) {
            if (v[i] == 'W' && i + 2 < 6 && v[i + 1] == 'W' && v[i + 2] == 'W') {
                ans = "YES";
                break;
            }
        }
        cout << ans << endl;
    }

}
