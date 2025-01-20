#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int flag = 0;
        int n = s.size();
        for (int i = 0; i < s.size() / 2; i++) {
            if (s[i] != s[n - i - 1])
                flag = 1;
        }
        if (flag == 0)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
}
