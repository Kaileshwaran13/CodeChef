#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a, b;
        vector < long long > ans;
        vector < pair < char, long long >> v;
        for (int i = 0; i < 2 * n; i++)
        {
            v.push_back({
                s[i],
                (i + 1)
            });
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            a.push_back(v[i].first);
        }
        for (int i = n; i < 2 * n; i++)
        {
            b.push_back(v[i].first);
            ans.push_back(v[i].second);
        }
        sort(ans.begin(), ans.end());
        if (a == b)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
        t--;
    }
    return 0;
}
