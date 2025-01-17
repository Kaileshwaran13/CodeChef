#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        string b;
        cin >> b;
        map < char, int > m, p;
        for (int i = 0; i < a.size(); i++) {
            m[a[i]]++;
        }
        for (int i = 0; i < b.size(); i++) {
            p[b[i]]++;
        }
        int count = 0;
        for (auto i: m) {
            for (auto j: p) {
                if (i.first == j.first) {
                    count += min(i.second, j.second);
                }
            }
        }
        cout << count << '\n';
    }
}
