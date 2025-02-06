#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        map < char, int > m;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }
        int l = 0, tee = 0, em = 0, ie = 0, e = 0;
        for (auto i: m) {
            if (i.first == 'L' && i.second >= 2) {
                l = 1;
            }
            else if (i.first == 'T' && i.second >= 2) {
                tee = 1;
            }
            else if (i.first == 'I' && i.second >= 2) {
                ie = 1;
            }
            else if (i.first == 'E' && i.second >= 1 && s.size() <= 9) {
                e = 1;
            }
            else if (i.first == 'E' && i.second >= 2 && s.size() > 9) {
                e = 1;
            }
            else if (i.first == 'M' && i.second >= 2) {
                em = 1;
            }
        }
        if (l == 1 && tee == 1 && em == 1 && ie == 1 && e == 1 && s.size() >= 9) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
