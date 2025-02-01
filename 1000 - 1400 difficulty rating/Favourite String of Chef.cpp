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

        int i = 0;
        int coidx = s.length(), chidx = 0;
        for (i = 0; i < s.length() - 3; i++) {
            if (s[i] == 'c' && s[i + 1] == 'o' && s[i + 2] == 'd' && s[i + 3] == 'e') {
                coidx = i;
            }

            if (s[i] == 'c' && s[i + 1] == 'h' && s[i + 2] == 'e' && s[i + 3] == 'f') {
                chidx = i;
                break;
            }
        }
        if (coidx < chidx)
            cout << "AC" << endl;
        else
            cout << "WA" << endl;
    }
    return 0;
}
