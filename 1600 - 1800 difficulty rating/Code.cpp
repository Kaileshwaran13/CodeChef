#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, k, ans;
        cin >> n >> k >> ans;
        vector < int > A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        string op;
        cin >> op;
        if (k == 0) {
            cout << ans << endl;
            continue;
        } else if (op[0] == 'A') {
            for (int i = 0; i < n; i++) {
                ans = ans & A[i];
            }
        } else if (op[0] == 'O') {
            for (int i = 0; i < n; i++) {
                ans = ans | A[i];
            }
        } else {
            if (k % 2 != 0) {
                for (int i = 0; i < n; i++) {
                    ans = ans ^ A[i];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
