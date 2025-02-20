#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0, curr = 0;
        cin >> n;
        string s = "";
        while (n > 0) {
            char ch = '0' + n % 2;
            s += ch;
            n /= 2;
        }
        int i = 0;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                break;

        }
        while (i < s.size()) {
            if (s[i] == '0') {
                s[i] = '1';
                ans += curr;
                curr = pow(2, i);
            } else {
                if (curr == 0) {

                    curr = pow(2, i);
                }
            }
            i++;
        }
        cout << ans << endl;
    }

}
