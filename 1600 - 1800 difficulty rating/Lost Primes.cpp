#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool prime(ll n) {
    if (n < 2) {
        return false;
    }
    if (n == 2 || n == 3) {
        return true;
    }
    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;;
        }
    }
    return true;
}
void solve() {
    string s, s1;
    cin >> s;
    s1 = s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            s1[i] = '1';
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            int j = (i == 0) ? 1 : 0;
            for (int k = j; k < 10; k++) {
                s1[i] = (k + '0');
                if (prime(stol(s1))) {
                    cout << s1 << endl;
                    return;
                }
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}
