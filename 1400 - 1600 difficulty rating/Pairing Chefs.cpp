#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, m;
        cin >> n >> m;
        vector < pair < long long int, long long int >> pairs_vector;
        for (long long int i = 0; i < m; i++) {
            long long int u, v;
            cin >> u >> v;
            pairs_vector.push_back({
                u,
                v
            });
        }

        vector < long long int > used(n, 0);
        vector < long long int > ans;

        for (long long int i = m - 1; i >= 0; i--) {
            long long int u = pairs_vector[i].first;
            long long int v = pairs_vector[i].second;
            if (used[u] == 0 && used[v] == 0) {
                ans.push_back(i);
                used[u] = 1;
                used[v] = 1;
            }
        }
        for (long long int i = ans.size() - 1; i >= 0; i--) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}
