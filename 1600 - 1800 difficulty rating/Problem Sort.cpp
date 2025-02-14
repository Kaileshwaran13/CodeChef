#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t, n, m, i, j, k;
    t = 1ll;
    while (t--)
    {
        cin >> n >> m;
        vector < pair < ll, ll >> diff;
        for (i = 0; i < n; i++)
        {
            vector < pair < ll, ll >> vp;
            for (j = 0; j < m; j++)
            {
                cin >> k;
                vp.push_back(make_pair(k, 0));
            }
            for (j = 0; j < m; j++)
            {
                cin >> k;
                vp[j].second = k;
            }
            sort(vp.begin(), vp.end());
            ll ans = 0ll;
            for (j = 0; j < m - 1; j++)
            {
                if (vp[j].second > vp[j + 1].second)
                    ans++;
            }
            diff.push_back(make_pair(ans, i + 1));
        }
        sort(diff.begin(), diff.end());
        for (auto x: diff)
            cout << (x.second) << "\n";
    }
    return 0;
}
