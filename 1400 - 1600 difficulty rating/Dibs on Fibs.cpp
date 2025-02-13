#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long t = 1;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        long long a[m], b[m];
        int maxi = max(2, n);
        long long fib[maxi];
        fib[0] = fib[1] = 0;
        long long temp = 0;
        long long mod = 1000000007;
        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            fib[0] = ((fib[0] + (m * temp) % mod) % mod);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            fib[1] = ((fib[1] + (m * temp) % mod) % mod);
        }
        for (int i = 2; i < n; i++)
        {
            fib[i] = ((fib[i - 1] + fib[i - 2]) % mod);
        }
        cout << fib[n - 1];
        cout << '\n';
    }
    return 0;
}
