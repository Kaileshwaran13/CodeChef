#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map < int, int > m;
        for (int i = 0; i < n; i++) {
            m[a[i]] = i + 1;
        }
        int sum = 0;
        for (auto i: m) {
            sum += i.second;
        }
        cout << sum << endl;
    }
}
