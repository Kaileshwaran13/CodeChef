#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll ts;
        cin >> ts;

        if ((ts & (ts - 1)) == 0)
        {
            cout << 0 << endl;
        }
        else if (ts % 2 == 0)
        {
            while (ts % 2 == 0)
            {
                ts /= 2;
            }
            cout << ts / 2 << endl;
        }
        else
        {
            cout << ts / 2 << endl;
        }
    }
    return 0;
}
