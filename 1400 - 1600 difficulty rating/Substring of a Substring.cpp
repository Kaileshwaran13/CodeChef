#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long n = s.length();
        long long maxi = 0, cnt = 0;
        for (i = 1; i < n - 1; i++)
        {
            if (s[i] == s[0] || s[i] == s[n - 1])
            {
                maxi = max(maxi, cnt);
                cnt = 0;
            }
            else

            ++cnt;
        }
        maxi = max(maxi, cnt);
        if (maxi == 0)
            cout << "-1\n";
        else
            cout << maxi << "\n";
    }
    return 0;
}
