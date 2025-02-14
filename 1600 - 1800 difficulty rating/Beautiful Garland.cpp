#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll cr = 0;
        ll cp = 0;
        ll cg = 0;
        bool flag = false;
        if (s.size() % 2) {
            flag = true;
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R') {
                cr++;
            }
            else cg++;
            if (i > 0) {
                if (s[i - 1] == s[i]) {
                    cp++;
                }
            }
        }
        if (s.size() > 2 && s[0] == s[s.size() - 1]) {
            cp++;
        }
        if (cr != cg || cp > 2) {
            flag = true;
        }
        if (flag) {
            cout << "no";
        }
        else {
            cout << "yes";
        }
        cout << endl;

    }
    return 0;
}
