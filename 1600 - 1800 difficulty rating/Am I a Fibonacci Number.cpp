#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    map < int, int > m;
    vector < int > fib(10010);
    for (int i = 0; i < 10010; i++) {
        if (i == 0) {
            fib[0] = 0;
            m[0]++;
        }
        else if (i == 1) {
            fib[1] = 1;
            m[1]++;
        }
        else {
            fib[i] = (fib[i - 1] + fib[i - 2]);
            m[fib[i]]++;
        }
    }
    while (t--) {
        string s;
        cin >> s;
        int a = 0;
        for (int i = 0; i < s.size(); i++) {
            a = (a * 10 + (s[i] - '0'));
        }
        if (m.count(a)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

}
