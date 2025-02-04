#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            if (!(i & 1))
                cout << i / 2 << " ";
            else
                cout << n - (i / 2) << " ";
        }
        cout << "\n";
    }
    return 0;
}
