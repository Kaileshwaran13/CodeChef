#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == s[i + 1]) {
                count++;
                i++;
            }
            else
                count++;
        }
        cout << count << endl;
    }
}
