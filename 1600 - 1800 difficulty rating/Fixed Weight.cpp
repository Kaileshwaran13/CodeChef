#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        bool istrue = false;
        for (long long i = 1; i <= n; i++) {
            if (x % i == 0 && x / i <= (n - (i - 1))) {
                istrue = true;
                break;
            }
        }
        if (istrue)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
