#include <bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    int nCr[501][501] = {
        0
    };
    nCr[0][0] = 1;
    nCr[1][0] = 1;
    nCr[1][1] = 1;
    for (int i = 2; i < 501; i++)
    {
        nCr[i][0] = 1;
        nCr[i][i] = 1;
        for (int j = 1; j < i; j++)
            nCr[i][j] = (nCr[i - 1][j] + nCr[i - 1][j - 1]) % m;
    }
    while (t--)
    {
        string s;
        cin >> s;
        int i = 0;
        unordered_map < char, int > mp;
        while (s[i] != '\0')
        {
            mp[s[i]]++;
            i++;
        }
        long ans = 1, len = s.length();
        for (auto it: mp)
        {
            ans = (ans * nCr[len][it.second]) % m;
            len -= it.second;
        }
        cout << ans << endl;
    }
    return 0;
}
