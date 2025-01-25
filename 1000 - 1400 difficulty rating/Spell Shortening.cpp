#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s, ans;
        bool f(0);
        cin >> n >> s;
        for (int i (0); i < n - 1; i++) {
            if(s[i] > s[i + 1]) {
                s.erase(i, 1);
                f = 1;
                break;
            }
        }
        if(f == 0) s.pop_back();
        cout << s << '\n';
    }
    return 0;
}
