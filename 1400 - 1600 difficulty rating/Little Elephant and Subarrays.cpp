#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k, mini = 0, q;
    cin >> n;
    vector < long long > v(n, 0);
    unordered_map < long long, long long > m;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    for (i = 0; i < (n - 1); i++)
    {
        mini = v[i];
        for (j = i + 1; j < n; j++)
        {
            mini = min(mini, v[j]);
            m[mini]++;
        }
    }
    cin >> q;
    while (q--)
    {
        cin >> k;
        cout << m[k] << "\n";
    }
    return 0;
}
