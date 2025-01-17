#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int jump = 1, mxj = 0, c = 1, day = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '#') {
                c = max(mxj, c);
                mxj = max(mxj, jump);
                jump = 1;
                if (mxj > c) {
                    day++;
                }
            }
            else {
                jump++;
            }
        }
        cout << day << '\n';
    }
}
