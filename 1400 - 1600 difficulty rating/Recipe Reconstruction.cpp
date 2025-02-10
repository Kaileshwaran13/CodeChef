#include <bits/stdc++.h>
using namespace std;

const int mod = 10000009;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool flag = true;
        int st = 0, end = s.size() - 1, count = 1;
        while (st < end) {
            if (s[st] == '?'
                and s[end] == '?')
                count = (count * 26) % mod;
            else if (s[st] != s[end] and s[st] != '?'
                and s[end] != '?') {
                flag = false;
                break;
            }
            st++;
            end--;
        }
        if (flag == false) {
            cout << 0 << endl;
            continue;
        }
        if (s.size() % 2 != 0 and s[s.size() / 2] == '?') count = (count * 26) % mod;

        cout << count << endl;
    }
    return 0;
}
