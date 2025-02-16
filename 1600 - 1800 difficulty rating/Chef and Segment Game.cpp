#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        double x;
        long long k;
        cin >> x >> k;
        long long c = 1;
        while (k > c)
        {
            k -= c;
            c *= 2;
        }
        cout << setprecision(10) << fixed;
        cout << x * (k + k - 1) / 2 / c << '\n';
    }
    return 0;
}
