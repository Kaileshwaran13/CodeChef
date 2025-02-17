#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, v;
        string s;
        cin >> n >> s;
        if (n <= 3)
            v = stoi(s);
        else
            v = stoi(s.substr(n - 3));
        if (v % 8 == 0)
            cout << s << endl;
        else {
            int ans;
            if (n == 1)
                ans = 0;
            else if (n == 2)
                ans = stoi(s.substr(n - 2, 1));
            else
                ans = stoi(s.substr(n - 3, 2));
            if (ans % 4 == 0)
                s.back() = '8';
            else if (ans % 4 == 1)
                s.back() = '6';
            else if (ans % 4 == 2)
                s.back() = '4';
            else
                s.back() = '2';
            cout << s << endl;
        }
    }
    return 0;
}
