#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long mod = 1e9 + 7;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > v1(n + 1), v2(n + 1);
        for (int i = 1; i <= n; i++) v1[i] = i;
        int c = 2, k = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i <= n / 2)
            {
                v2[i] = c;
                c += 2;
            }
            else
            {
                v2[i] = k;
                k += 2;
            }
        }
        vector < bool > vis(n + 1, 0);
        c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                c++;
                vis[v2[i]] = 1;
                int x = i;
                while (v2[x] != v1[i])
                {
                    vis[v1[x]] = 1;
                    vis[v2[x]] = 1;
                    x = v2[x];
                }
            }
        }
        long long res = 1;
        for (int i = 0; i < c; i++)
        {
            res *= 26;
            res %= mod;
        }
        cout << res << endl;
    }
}
