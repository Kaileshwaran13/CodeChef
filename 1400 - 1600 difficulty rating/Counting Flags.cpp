#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long ans = 0 ;
        ans += (2 * n * (n - 1) * (n - 1));
        ans += (n * (n - 1) * (n - 2));
        ans += (2 * n * (n - 1) * (n - 2) * (n - 2));
        cout << ans << "\n";
    }
}
