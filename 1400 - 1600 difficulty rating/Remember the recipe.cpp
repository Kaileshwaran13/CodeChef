#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    long long int a[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> a[i];
    }
    int q;
    cin >> q;
    while (q--) {
        string r;
        cin >> r;
        long long int f = INT_MIN;
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (s[i].find(r) == 0) {
                if (a[i] > f) {
                    ans = s[i];
                    f = a[i];
                }
            }
        }
        if (ans.size() == 0) cout << "NO" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
