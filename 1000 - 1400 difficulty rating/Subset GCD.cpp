#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double

signed main()
{
    const int MOD = 1000000007;
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int s = n / k;
        int c = 0;
        while (c < k) {
            c++;
            cout << s << " ";
            s += n / k;
        }
        cout << endl;
    }

    return 0;
}
