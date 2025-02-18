#include <bits/stdc++.h>
using namespace std;
#define int long long
#define zero 0LL

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], ans = 0;
        for (int i = 0; i < n; ++i) cin >> arr[i];
        unordered_map < int, int > mp;
        for (int i = 0; i < n; ++i)
        {
            int l = max(zero, i - arr[i] + 1);
            int r = min(n - 1, i + arr[i] - 1);
            if (mp.count(arr[i])) 
            l = max(l, mp[arr[i]] + 1);
            ans += max(r - l + 2 - arr[i], zero);
            mp[arr[i]] = i;
        }
        cout << ans << endl;
    }
    return 0;
}
