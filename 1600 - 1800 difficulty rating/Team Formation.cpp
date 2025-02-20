#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int n = 0;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int left = 0, right = 0, mid = 0, out = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1' && t[i] == '1') {
                mid += 1;
            }
            else if (s[i] == '1') {
                left += 1;
            }
            else if (t[i] == '1') {
                right += 1;
            }
            else {
                out += 1;
            }
        }
        int result = 0;
        result += min(left, right);
        out += (max(left, right) - result);
        result += min(mid, out);
        if (mid > out) {
            result += (mid - out) / 2;
        }
        cout << result << "\n";
    }
    return 0;
}
