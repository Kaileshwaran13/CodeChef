#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0, x = 0, y = 0;
        bool count = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                a++;
            if (s[i] == '0' && count)
            {
                x = i;
                y = i;
                count = false;
            }
            else
            {
                if (s[i] == '0')
                {
                    y = i;
                }
                else
                {
                    count = true;
                    if (x != 0 && y != n - 1)
                    {
                        if ((s[x - 1] == '+' && s[y + 1] == '-') || (s[x - 1] == '-' && s[y + 1] == '+'))
                        {
                            if ((y - x + 1) % 2 != 0)
                            {

                                b++;
                            }
                        }
                    }
                    x = y = 0;
                }
            }
        }
        if (a == n)
        {
            b = a;
        }
        cout << b << endl;
    }
}
