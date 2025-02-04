#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, n, k;
    cin >> n >> t;
    while (t--)
    {
        cin >> k;
        if ((k < (n + 2)) || (k > (3 * n)))
            cout << "0\n";
        else
            cout << n - abs(((2 * n) + 1) - k) << "\n";
    }
    return 0;
}
