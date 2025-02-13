#include<bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        while (n > 0) {
            if (s.substr(0, n / 2) == s.substr(n / 2, n / 2)) n /= 2;
            else {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
