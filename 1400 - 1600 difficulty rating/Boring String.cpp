#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, flag = 0;
        string s;
        cin >> n >> s;
        s += 'P';
        vector < pair < char, int >> v;
        int i = 0;
        while (i < n) {
            char c = s[i];
            int len = 1;
            while (s[i] == s[i + 1] && i < n) {
                len++;
                i++;
            }
            v.push_back({
                c,
                len
            });
            i++;
        }
        sort(v.begin(), v.end(), [ & ](pair < char, int > & a, pair < char, int > & b) {
            return a.second > b.second;
        });
        int a = v[0].second;
        vector < int > f(26, 0);
        for (auto d: v) {
            if (d.second != a) break;
            f[d.first - 'a']++;
        }
        for (auto fr: f) {
            if (fr > 1) {
                flag = 1;
                break;
            }
        }
        cout << (flag ? a : a - 1) << endl;
    }
    return 0;
}
