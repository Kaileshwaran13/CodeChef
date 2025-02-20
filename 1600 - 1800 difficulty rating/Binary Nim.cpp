#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        string s;
        cin >> n >> s;
        vector < string > st(n);
        int dee = 0, dum = 0;
        for (int i = 0; i < n; i++) {
            cin >> st[i];
            bool fg = false;
            if (st[i][0] == '1') {
                fg = true;
            }
            for (char c: st[i]) {
                if (!fg && c == '0') 
                    dee += 1;
                else if (fg && c == '1') 
                    dum += 1;
            }
        }
        if (s == "Dee") {
            if (dee > dum) 
                cout << "Dee" << endl;
            else 
                cout << "Dum" << endl;
        }
        else {
            if (dee < dum) 
                cout << "Dum" << endl;
            else 
                cout << "Dee" << endl;
        }
    }

}
