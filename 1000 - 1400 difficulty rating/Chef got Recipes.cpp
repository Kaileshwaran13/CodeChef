#include <bits/stdc++.h>
using namespace std;

int main() {
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        long long ans = 0;
        vector < long long > freq(32);
        string s;
        for (int i = 0; i < n; i++) {
            cin >> s;
            long long mask = 0;
            for(int i = 0; i < s.size(); i++) {
                if (s[i] == 'a') {
                    mask |= (1 << 0);
                }
                else if (s[i] == 'e') {
                    mask |= (1 << 1);
                }
                else if (s[i] == 'i') {
                    mask |= (1 << 2);
                }
                else if (s[i] == 'o') {
                    mask |= (1 << 3);
                }
                else if (s[i] == 'u') {
                    mask |= (1 << 4);
                }
            }
            freq[mask]++;
        }
        for (int i = 1; i < 32; i++) {
            for(int j = i + 1; j < 32; j++) {
                if ((i | j) == 31) {
                    ans += (freq[i] * freq[j]);
                }
            }
        }
        ans += (freq[31] * (freq[31] - 1)) / 2;
        cout << ans << endl;
    }
    return 0;
}
