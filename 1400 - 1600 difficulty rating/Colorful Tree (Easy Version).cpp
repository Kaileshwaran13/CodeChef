#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int N;
        cin >> N;
        vector<vector<int>> adj(N + 1);
        for (int i = 0; i < N - 1; ++i)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans = 0;
        for (int u = 1; u <= N; ++u)
        {
            int indegree = adj[u].size();
            if (indegree == 1)
            {
                ans += 3;
            }
            else
            {
                ans += 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
