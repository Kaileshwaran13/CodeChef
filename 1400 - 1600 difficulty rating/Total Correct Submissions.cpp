#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map < string, int > m;
        vector < int > v;
        for (int i = 0; i < 3 * n; ++i)
        {
            string s;
            int cnt;
            cin >> s >> cnt;

            m[s] += cnt;
        }
        for (auto & i: m)
        {
            v.push_back(i.second);
        }
        sort(v.begin(), v.end());
        for (auto & i: v)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
}
