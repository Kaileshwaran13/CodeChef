#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 1e9;
        for (int i = 0; i < n; i++)
        {
            int cur_ans = 0;
            for (int j: {
                    i - 1,
                    i + 1
                })
            {
                if (j < 0 or j >= n)
                    continue;

                cur_ans = max(cur_ans, abs(a[i] - a[j]));
            }
            ans = min(ans, cur_ans);
        }
        cout << ans << "\n";
    }
}
