#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    map < string, int > m1, m2;
    int n, t, res = 0, maxi = 0;
    cin >> t;
    while (t--)
    {
        res = 0;
        maxi = 0;
        cin >> n;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            s3 = s1[i];
            m1[s3]++;
        }
        for (int i = 0; i < n; i++)
        {
            s3 = s2[i];
            m2[s3]++;
        }
        map < string, int > ::iterator it, bt;
        bt = m2.begin();
        it = m1.begin();
        for (auto it: m1)
        {
            for (auto bt: m2)
            {
                if (it.first == bt.first)
                    res = min(bt.second, it.second);
            }
            maxi = max(maxi, res);
        }
        cout << maxi << endl;
        m1.clear();
        m2.clear();
    }
}
