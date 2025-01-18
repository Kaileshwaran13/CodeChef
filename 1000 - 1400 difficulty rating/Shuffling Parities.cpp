#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, t, odd, even, res;
    cin >> t;
    while (t--) {
        cin >> n;
        vector < long long > input(n);
        for (long long i = 0; i < n; ++i)
            cin >> input[i];
        odd = 0;
        for (long long i = 0; i < n; ++i) {
            if (input[i] % 2 != 0)
                ++odd;
        }
        even = n - odd;
        if (n % 2 == 0)
            res = min(even, n / 2) + min(odd, n / 2);
        else
            res = min(even, n / 2 + 1) + min(odd, n / 2);
        cout << res << '\n';
    }
}
