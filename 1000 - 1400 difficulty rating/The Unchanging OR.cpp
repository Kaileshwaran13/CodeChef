#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 1;
        int x = n;

        while (x >= 2)
        {
            x = x / 2;
            ans++;
        }

        int m = log(n) / log(2);
        m++;
        cout << n - m << endl;
    }
}
