#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char> ans(n);
        for (int i = 0; i < n; i++) {
            cin >> ans[i];
        }

        vector<char> chans(n);  
        for (int i = 0; i < n; i++) {
            cin >> chans[i];
        }

        vector<int> win(n + 1); 
        for (int i = 0; i <= n; i++) {
            cin >> win[i];
        }

        int ct = 0;
        for (int i = 0; i < n; i++) {
            if (ans[i] == chans[i]) {
                ct++;
            }
        }

        if (ct == 0) {
            cout << win[0] << endl;
        } else if (ct == n) {
            cout << win[n] << endl;
        } else {
            int mx = 0;
            for (int i = 0; i < ct + 1; i++) { 
                if (mx < win[i]) {
                    mx = win[i];
                }
            }
            cout << mx << endl;
        }
    }

    return 0;
}
