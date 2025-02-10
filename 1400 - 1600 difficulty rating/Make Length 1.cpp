#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector < char > v1;
        int n;
        cin >> n;
        string s;
        cin >> s;
        int y = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && s[i + 1] == '1') {
                i++;
            }
            else if (s[i] == '1') {
                y = 1;
                break;
            }
        }
        if (n == 1) y = 0;

        y ? cout << "NO" : cout << "YES";
        cout << endl;
    }
    return 0;
}
