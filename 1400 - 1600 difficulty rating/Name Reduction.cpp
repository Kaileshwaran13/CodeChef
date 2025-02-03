#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, i, j;
    cin >> t;
    while (t--)
    {
        string s, z, s1 = "";
        int flg = 0;
        cin >> s >> z;
        s = s + z;
        vector < int > v(26, 0);
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
                continue;
            v[s[i] - 97]++;
        }
        cin >> n;
        string tmp = "";
        for (i = 1; i <= n; i++)
        {
            cin >> tmp;
            s1 = s1 + tmp;
        }
        vector < int > x(26, 0);
        for (j = 0; j < s1.size(); j++)
        {
            x[s1[j] - 97]++;
            if (x[s1[j] - 97] > v[s1[j] - 97])
                break;
        }
        if (j < s1.size())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
