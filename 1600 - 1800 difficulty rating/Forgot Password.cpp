#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map < char, char > mp;
        for (int i = 0; i < n; i++) {
            char c, p;
            cin >> c >> p;
            mp[c] = p;
        }
        string s;
        cin >> s;
        bool decimal = false;
        for (int i = 0; i < s.length(); i++) {
            char t = s[i];
            auto it = mp.find(t);
            if (it != mp.end()) {
                s[i] = it -> second;
            }
            if (s[i] == '.')
                decimal = true;
        }
        int i = 0;
        while (s[i] == '0')
            i++;
        int j = s.length() - 1;
        if (decimal) {
            while (s[j] == '0')
                j--;
            if (s[j] == '.')
                j--;
        }
        if (i > j) {
            cout << "0\n";
        }
        else {
            for (int a = i; a <= j; a++)
                cout << s[a];
            cout << "\n";
        }
    }
    return 0;
}
