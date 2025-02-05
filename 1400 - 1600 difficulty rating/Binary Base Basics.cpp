#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        string s;
        cin >> s;
        long long c = 0;
        i = 0 , j = s.length() - 1 ;
        while (i < j)
        {
            if (s[i] != s[j])
                ++c;
            ++i;
            --j;
        }
        if (n & 1)
        {
            if (k >= c)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            k -= c;
            if ((k >= 0) && (k % 2 == 0 ))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
