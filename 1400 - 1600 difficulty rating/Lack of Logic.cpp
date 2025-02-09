#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--) {
        getline(cin, s);
        map < char, int > m;
        for (int i = 0; i < 26; i++) {
            m[i + 'a'] = 1;
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
            if (s[i] >= 'a' && s[i] <= 'z') {
                m[s[i]]++;
            }

        }
        char ans = '~';
        for (auto it: m) {
            if (it.second == 1) {
                ans = it.first;
                break;
            }
        }
        cout << ans << endl;
    }

}
