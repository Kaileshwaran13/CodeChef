#include "bits/stdc++.h"

using namespace std;
#define int long long int
#define double long double

signed main()
{
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        deque < int > window;
        int window_sum = 0;
        vector < int > ans(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int s = 0;
            for (int j = i; j < n; j++) {
                s += p[j];
                if (s <= n) {
                    ans[s]++;
                } else {
                    break;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
