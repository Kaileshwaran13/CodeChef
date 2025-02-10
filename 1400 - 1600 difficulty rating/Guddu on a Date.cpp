#include <bits/stdc++.h>

#define int long long
using namespace std;
int solve(string s) {
    int sum = 0;
    for (auto x: s)
        sum += (x - '0');
    return sum % 10;
}
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int x = solve(s);
        if (x == 0) {
            cout << s + '0' << endl;
        } else {
            cout << s + to_string(10 - x) << endl;
        }
    }
}
