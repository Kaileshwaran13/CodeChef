#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string s, t;
        cin >> n >> m;
        cin >> s >> t;
        if (s == t) {
            cout << "Yes" << endl;
            continue;
        }
        int a1 = count(s.begin(), s.end(), 'a');
        int a2 = count(t.begin(), t.end(), 'a');
        if (a1 == a2 && a1 != 0) {
            int b1 = 0, b2 = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'a')
                    break;
                else
                    b1++;
            }
            for (int i = 0; i < m; i++) {
                if (t[i] == 'a')
                    break;
                else
                    b2++;
            }
            if (b1 == b2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;

        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
