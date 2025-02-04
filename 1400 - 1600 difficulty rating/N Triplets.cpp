#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        long long f = 0, ans = 0, x = 0;
        cin >> n;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans = i;
                f = 1;
                if (i != n / i)
                {
                    x = 0;
                    break;
                }

                if (i == n / i)
                    x = 1;

            }
        }
        if (f == 0 || n == 1 || x == 1)
            cout << -1 << endl;
        else
            cout << 1 << " " << ans << " " << n / ans << endl;
    }

}
