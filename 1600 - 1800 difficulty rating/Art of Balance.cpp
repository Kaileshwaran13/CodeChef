#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector < int > freq(26, 0);
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'A']++;
        }
        sort(freq.rbegin(), freq.rend());
        int cnt = 0;
        int ans = INT_MAX;
        for (int i = 1; i <= 26; i++) {
            if (s.length() % i == 0) {
                cnt = 0;
                int need = s.length() / i;
                for (int j = 0; j < i; j++) {
                    if (freq[j] <= need) {
                        cnt += (need - freq[j]);
                    }
                }
                ans = min(ans, cnt);
            }
        }
        cout << ans << endl;
    }
}
