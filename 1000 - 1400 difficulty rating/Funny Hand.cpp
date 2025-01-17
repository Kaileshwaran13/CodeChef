#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (abs(a - b) > 2 || abs(a - b) == 0)
        {
            cout << 0 << '\n';
            continue;
        }
        if (abs(a - b) == 2)
        {
            cout << 1 << '\n';
            continue;
        }
        if (abs(a - b) == 1)
        {
            if (a == 1 || b == n || a == n || b == 1)
            {
                cout << 1 << '\n';
                continue;
            }
            else
                cout << 2 << '\n';
        }
    }
}
