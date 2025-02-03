#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        int currlen = 1, maxlen = 1;
        char lastchar = s[0];

        for (int i = 1; i < n; ++i) {
            if (s[i] == lastchar) {
                ++currlen;
            } else {
                lastchar = s[i];
                currlen = 1;
            }
            maxlen = max(maxlen, currlen);
        }
        cout << maxlen << " ";
        while (q--) {
            char update;
            cin >> update;
            if (lastchar == update) {
                ++currlen;
            } else {
                lastchar = update;
                currlen = 1;
            }
            maxlen = max(maxlen, currlen);
            cout << maxlen << " ";
        }
        cout << endl;
    }
    return 0;
}
