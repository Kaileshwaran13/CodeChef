#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == b) cout << 0 << endl;
        else {
            long long x = min(a, b);
            long long val1 = ceil((b - x) / 2.0) + ceil((x - a) / 2.0);
            long long val2 = ceil((b - (x + 1)) / 2.0) + ceil(((x + 1) - a) / 2.0);
            cout << max(val1, val2) << endl;
        }
    }
    return 0;
}
