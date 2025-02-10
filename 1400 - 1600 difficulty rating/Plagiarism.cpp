#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        map < int, int > mp;
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            if (x <= n) mp[x]++;
        }
        vector < int > ans;
        for (auto & x: mp) {
            if (x.second > 1) ans.push_back(x.first);
        }
        cout << ans.size() << " ";
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
