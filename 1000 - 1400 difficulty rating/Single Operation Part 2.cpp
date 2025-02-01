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
        string s;
        cin >> s;
        int d = 0;
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                z++;
            }
            if (s[i] == '0')
            {
                d++;
            }
            if (z > 1)
            {
                break;
            }
        }
        cout << d + 1 << endl;
    }
}
