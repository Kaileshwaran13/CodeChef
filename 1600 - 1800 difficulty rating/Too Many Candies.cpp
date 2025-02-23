#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--) {
        long long int n, k, m;
        cin >> n >> m >> k;
        long long int ans = -1, dv = 0;
        long long int times = n / m;
        while (times) {
            long long int rem = n - m * times;
            if (rem % k == 0) {
                ans = rem / k;
                break;
            }
            times--;
        }
        cout << ans << '\n';
    }
}
