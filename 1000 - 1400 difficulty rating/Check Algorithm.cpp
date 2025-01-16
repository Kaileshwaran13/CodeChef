#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    long int t;
    cin >> t;
    while (t--) {
        string s, p;
        cin >> s;
        long int x = s.size();
        s.push_back('A');
        long int count = 1;
        for (int i = 1; i <= x; i++) {
            if (s[i - 1] == s[i]) {
                count++;
            }
            else {
                p += s[i - 1];
                p += to_string(count);
                count = 1;
            }
        }
        long int y = p.size();
        if (x > y) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
}
