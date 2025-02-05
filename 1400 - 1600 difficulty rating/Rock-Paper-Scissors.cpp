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
        string ans;
        int winreq = n / 2;
        winreq++;
        int pad = n - winreq;
        int index = 0;
        while (pad > 0 && index < s.size()) {
            ans.push_back('P');
            if (s[index] != 'R') {
                pad--;
            }
            index++;
        }
        for (; index < s.size(); index++) {
            if (s[index] == 'R') {
                ans.push_back('P');
            }
            else if (s[index] == 'S') {
                ans.push_back('R');
            }
            else {
                ans.push_back('S');
            }
        }
        cout << ans << endl;
    }
    return 0;
}
