#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        long long n = s.size(), ct = 0, ans = 0, pre = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                ans += (i - pre > 1 ? ct * (i * 1LL - pre) : 0);
                pre = i;
                ct++;
            }
        }
        if (s[n - 1] == '0')
            ans += ct * (n - pre);
        cout << ans << endl;
    }
}
