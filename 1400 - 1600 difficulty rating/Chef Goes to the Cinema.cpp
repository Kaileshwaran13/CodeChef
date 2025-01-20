#include <bits/stdc++.h>
using namespace std;

int main()
{
    int jk;
    cin >> jk;
    while (jk--)
    {
        long long x, p, i, k = 1, temp;
        cin >> x;
        long long t;
        if (x >= 1)
        {
            t = 1;
            p = 1;
        }
        while (p < x)
        {
            if (p + (++k) <= x)
            {
                p += k;
                t++;
                temp = k;
            }
            else
            {
                break;
            }
        }
        if (abs(p - x) > abs(p + (++k) - x))
        {
            p += k;
        }
        cout << t + abs(p - x) << '\n';
    }
}
