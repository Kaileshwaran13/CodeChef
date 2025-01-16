#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        int count = 0, maxVal = INT_MIN, ans = 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                count++;
            }
        }
        for (int i = 1; i <= s.size(); i++) {
            if (s[i - 1] == '1' && s[i] == '1') {
                ans++;
            }
            else {
                maxVal = max(maxVal, ans);
                ans = 1;
            }
        }
        cout << count * x + maxVal * y << '\n';
    }
}
