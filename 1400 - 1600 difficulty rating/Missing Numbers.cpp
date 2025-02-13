#include <bits/stdc++.h>
using namespace std;

void solve(long long sub, long long div, long long add, long long mul, long long & a, long long & b) {
    if (a != -1 and b != -1) {
        return;
    }
    long long num1 = (add + sub) / 2, num2 = add - num1;
    if (num1 < 1 or num1 > 10000 or num2 < 1 or num2 > 10000)
        return;
    if ((num1 * num2 == mul) and(num2 != 0 and num1 / num2 == div)) {
        a = num1;
        b = num2;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector < long long > v;
        for (int i = 0; i < 4; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        long long a = -1, b = -1;
        solve(v[0], v[1], v[2], v[3], a, b);
        solve(v[1], v[0], v[2], v[3], a, b);
        solve(v[0], v[1], v[3], v[2], a, b);
        solve(v[1], v[0], v[3], v[2], a, b);
        cout << a << " " << b << endl;
    }
}
