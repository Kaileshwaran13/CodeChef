#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int less = 0, great = 0, max1 = 0, max2 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '<') {
                less++;
                great = 0;
                max1 = max(max1, less);
            }
            else if (s[i] == '>') {
                great++;
                less = 0;
                max2 = max(great, max2);
            }
        }
        cout << max(max1, max2) + 1 << endl;
    }

}
