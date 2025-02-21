#include <bits/stdc++.h>
using namespace std;

bool checkChef(char c, char h, char e, char f) {
    if ((c == 'C' || c == '?') && (h == 'H' || h == '?') && (e == 'E' || e == '?') && (f == 'F' || f == '?')) return true;
    return false;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--) {
        string s, ans = "";
        cin >> s;
        int i = s.size() - 1;
        while (i >= 0) {
            if (i >= 3 && checkChef(s[i - 3], s[i - 2], s[i - 1], s[i])) {
                i -= 4;
                ans = "CHEF" + ans;
                continue;
            }
            else if (s[i] == '?') {
                ans = "A" + ans;
            }
            else ans = s[i] + ans;
            i--;
        }
        cout << ans << '\n';
    }
}
