#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        for (int i: s) {
            if (i == '1') {
                one++;
            }
            if (i == '0') {
                zero++;
            }
        }
        int temp = 1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '?'
                and temp) {
                if (one > zero) {
                    s[i] = '0';
                    zero++;
                }
                else if (zero > one) {
                    s[i] = '1';
                    one++;
                }
                else if (zero == one) {
                    s[i] = '1';
                    one++;
                }
            }
        }
        cout << s << endl;
    }
}
