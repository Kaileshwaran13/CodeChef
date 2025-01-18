#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map < char, int > mp;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            set < char > str;
            for (auto v: s) {
                str.insert(v);
            }
            for (auto v1: str) {
                mp[v1]++;
            }

        }
        int count = 0;
        for (auto pair: mp) {
            if (pair.second == n) {
                count++;
            }
        }
        cout << count << '\n';
    }
}
