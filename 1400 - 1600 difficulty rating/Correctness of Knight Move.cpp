#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--)
    {
        getline(cin, s);
        if (s.length() != 5 || s[0] > 'h' || s[0] < 'a' || s[1] > '8' || s[1] < '1' || s[2] != '-' || s[3] > 'h' || s[3] < 'a' || s[4] > '8' || s[4] < '1') {
            cout << "Error" << endl;
            continue;
        }
        char srt = s[0], fns = s[3];
        int si = s[1] - '0', fi = s[4] - '0';
        if (srt + 2 == fns && (si + 1 == fi || si - 1 == fi))
            cout << "Yes\n";
        else if (srt + 1 == fns && (si + 2 == fi || si - 2 == fi))
            cout << "Yes\n";
        else if (srt - 1 == fns && (si + 2 == fi || si - 2 == fi))
            cout << "Yes\n";
        else if (srt - 2 == fns && (si + 1 == fi || si - 1 == fi))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
