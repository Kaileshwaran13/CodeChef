#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;

        int s0 = 0;
        int t0 = 0;
        int uneq = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') s0++;
            if (t[i] == '0') t0++;
            if (s[i] != t[i]) uneq++;
        }
        if (s0 != t0)
            cout << "NO" << endl;
        else {
            if (n == 2) {
                if (s == t && (s == "01" || s == "10") && k % 2 == 1)
                    cout << "NO" << endl;
                else if (s == "01" && t == "10" && k % 2 == 0)
                    cout << "NO" << endl;
                else if ((s == "10") && (t == "01") && k % 2 == 0)
                    cout << "NO" << endl;
                else cout << "YES" << endl;
            }
            else {
                if (k >= uneq / 2)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }

        }
    }
}
