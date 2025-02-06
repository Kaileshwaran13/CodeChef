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
        if (s.length() == 1)
        {
            if (s[0] == '1') cout << 0 << endl;
            else cout << 1 << endl;
        }
        else
        {
            int val = 0;
            if (s[0] == '0') val++;
            if (s[n - 1] == '0') val++;
            cout << val << endl;
        }

    }
    return 0;
}
