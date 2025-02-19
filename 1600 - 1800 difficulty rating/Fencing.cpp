#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;
        map < pair < int, int >, int > m1;
        for (int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            m1[{a, b}] = 1;
        }
        int ans = 0;
        for (auto ele : m1) {
            int a = ele.first.first;
            int b = ele.first.second;
            if (m1.find({a + 1, b}) == m1.end()) {
                ans++;
            }
            if (m1.find({a - 1, b}) == m1.end()) {
                ans++;
            }
            if (m1.find({a, b + 1}) == m1.end()) {
                ans++;
            }
            if (m1.find({a, b - 1}) == m1.end()) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
