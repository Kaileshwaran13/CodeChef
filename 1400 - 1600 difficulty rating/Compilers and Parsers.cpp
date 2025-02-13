#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int l = s.size();
        int balance = 0;
        int best = 0;
        for (int i = 0; i < l; i++) {
            if (s[i] == '<') {
                balance++;
            } else if (s[i] == '>') {
                balance--;
            }
            if (balance < 0) {
                break;
            } else if (balance == 0) {
                best = i + 1;
            }
        }
        cout << best << '\n';
    }

}
