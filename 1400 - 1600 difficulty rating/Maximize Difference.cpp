#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int n, m;
        cin >> n >> m;
        ll answer1, answer2;
        if (m < 2 * n) {
            cout << m << " " << m << endl;
        }
        else if (m % n == 0) {
            cout << m << " " << n << endl;
        }
        else {
            ll x = m / 2;
            if (m >= 2 * n) x = 2 * n;
            long diff = INT_MIN;
            for (int i = n; i < x; i++) {
                ll d = m / i;
                ll cd = (i * d) - i;
                if (cd > diff) {
                    answer1 = i;
                    answer2 = i * d;
                    diff = cd;
                }
            }
            cout << answer1 << " " << answer2 << endl;
        }

    }
    return 0;
}
