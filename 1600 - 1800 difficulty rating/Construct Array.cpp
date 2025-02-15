#include <bits/stdc++.h>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        if (n % 2 != 0)
            cout << "-1\n";
        else
        {
            vector < long > v(n, 0);
            for (long i = 1; i <= n / 2; i++)
            {
                if (i % 2 != 0)
                {
                    v[i - 1] = 2 * i;
                    v[n - i] = i;
                }
                else
                {
                    v[i - 1] = i;
                    v[n - i] = 2 * i;
                }
            }
            for (long i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
