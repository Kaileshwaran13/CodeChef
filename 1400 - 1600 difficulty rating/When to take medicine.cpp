#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string m = "", n = "", l = "";
        int days, ans;
        for (int i = 0; i < 4; i++) { 
            m += s[i];
        }
        int num = stoi(m);
        for (int i = 8; i <= 9; i++) {
            l += s[i];
        }
        int d = stoi(l);
        bool leap = false;
        if (num % 4 == 0 and num % 100 != 0 or num % 400 == 0) leap = true;
        for (int i = 5; i < 7; i++) { 
            n += s[i];
        }
        int mth = stoi(n);
        if (mth == 1 or(mth == 2 and leap == true) or mth == 3 or mth == 5 or mth == 7 or mth == 8 or mth == 10 or mth == 12) {
            if (mth != 2) {
                days = 31 - d + 1;
            }
            else {
                days = 29 - d + 1;
            }
            if (days % 2 == 0) ans = days / 2;
            else ans = (days + 1) / 2;
        } else {
            if (mth == 2) {
                days = 28 - d + 1 + 31;
            }
            else {
                days = 30 - d + 1 + 31;
            }
            if (days % 2 == 0) ans = days / 2;
            else ans = (days + 1) / 2;
        }
        cout << ans << '\n';
    }
}
