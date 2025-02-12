#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        if (s[0] == s[n - 1])
            cout << n - 2 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
