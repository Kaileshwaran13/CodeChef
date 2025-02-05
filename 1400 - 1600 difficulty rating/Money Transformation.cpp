#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long maxi = (a * 100) + b, ans = 0, cnt = 0;
        while (a >= 0 && cnt <= 10000)
        {
            ++cnt;
            if ((a == 0 && b <= c) || cnt >= 10000)
                break;
            else if (b < c)
            {
                a -= 1 ;
                b += 100;
            }
            b -= c;
            long long t = a;
            a = b;
            b = t;
            long long amt = (a * 100) + b;
            if (amt > maxi)
            {
                maxi = amt;
                ans = cnt;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
