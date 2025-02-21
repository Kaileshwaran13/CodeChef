#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map < char, int > mp;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (mp.find(s[i]) != mp.end()) {
                ans = max(ans, (mp[s[i]] + n - i));
            }
            mp[s[i]] = i;
        }
        cout << ans << endl;
    }

}
