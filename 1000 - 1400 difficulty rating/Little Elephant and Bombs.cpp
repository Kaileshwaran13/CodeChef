#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < x; i++) {
            if (s[i] == '0'
                and((s[i - 1] == '0' || i == 0) and(s[i + 1] == '0' || i == x - 1))) {
                count++;
            }
        }
        cout << count << '\n';
    }
    
}
