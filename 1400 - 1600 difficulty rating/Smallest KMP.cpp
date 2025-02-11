#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, p;
        cin >> s;
        cin >> p;
        string ans = "";
        unordered_map < char, int > m1;
        for (auto x: s) m1[x]++;
        for (auto y: p) m1[y]--;
        for (auto x: m1) {
            int m = x.second;
            while (m--) {
                ans += x.first;
            }
        }
        int w = ans.length();
        sort(ans.begin(), ans.end());
        int i = 0, j = 0;
        while (i < w && ans[i] < p[0]) {
            i++;
        }
        i = min(i, w);
        while (j < w && ans[j] <= p[0]) {
            j++;
        }
        j = min(j, w);
        string ans2 = ans;
        ans.insert(i, p);
        ans2.insert(j, p);
        cout << min(ans, ans2) << endl;
    }
    return 0;
}
