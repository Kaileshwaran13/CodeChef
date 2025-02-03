#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (s1[i] == s2[i] && s2[i] == 'W') {
                ans += 'B';
            }
            else if (s1[i] == s2[i] && s2[i] == 'B') {
                ans += 'W';
            }
            else if (s1[i] != s2[i]) {
                ans += 'B';
            }
        }
        cout << ans << endl;

    }
    return 0;

}
