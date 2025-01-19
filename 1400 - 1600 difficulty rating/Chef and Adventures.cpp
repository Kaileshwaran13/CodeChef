#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        long long x, y, m;
        cin >> n >> m >> x >> y;
        if (x == 1 ll || y == 1 ll)
        {
            if ((x != 1) && (((n - 1) % x == 0) || (m > 1 && (n - 1) % x == 1)))
                cout << "Chefirnemo\n";
            else if ((y != 1) && (((m - 1) % y == 0) || (n > 1 && (m - 1) % y == 1)))
                cout << "Chefirnemo\n";
            else if (x != 1 || y != 1)
                cout << "Pofik\n";
            else
                cout << "Chefirnemo\n";
        }
        else if (((n - 1) % x == 0) && ((m - 1) % y == 0))
            cout << "Chefirnemo\n";
        else if (((n - 1) % x == 1) && ((m - 1) % y == 1))
            cout << "Chefirnemo\n";
        else
            cout << "Pofik\n";
    }
}
