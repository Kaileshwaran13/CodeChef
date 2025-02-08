#include <bits/stdc++.h>
using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a3, c1, c2, c3;
        cin >> a1 >> a2 >> a3 >> c1 >> c2 >> c3;
        vector < pair < int, int > > v;
        v.push_back({a1,c1});
        v.push_back({a2,c2});
        v.push_back({a3,c3});
        sort(v.begin(), v.end());
        bool flag = true;
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i].first < v[i + 1].first and v[i].second >= v[i + 1].second) {
                flag = false;
            }
            else if (v[i].first == v[i + 1].first and v[i].second != v[i + 1].second) {
                flag = false;
            }
        }
        if (flag) cout << "FAIR" << '\n';
        else cout << "NOT FAIR" << '\n';
    }
    return 0;
}
