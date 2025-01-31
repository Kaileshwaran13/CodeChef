#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--> 0) {
        int n, f = 0;
        cin >> n;
        string s;
        cin >> s;
        if (s.substr(0, n - 1).find(s[n - 1]) != string::npos) f = 1;
        if (f) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
