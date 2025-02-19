#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int prefixsum[n];
        prefixsum[0] = 0;
        for (int i = 0; i < n - 1; i++) {
            if (i == 0) {
                if (s[i] == s[i + 1]) prefixsum[i + 1] = 0;
                else prefixsum[i + 1] = 1;
            }
            else {
                if (s[i] == s[i + 1]) prefixsum[i + 1] = prefixsum[i];
                else prefixsum[i + 1] = 1 + prefixsum[i];
            }
        }
        int start = 0, end = k;
        long long int ans = 0;
        while (end < n) {
            ans += prefixsum[end] - prefixsum[start];
            start++, end++;
        }
        cout << ans << endl;
    }
}
