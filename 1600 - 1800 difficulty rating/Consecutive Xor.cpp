#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll val = arr[0];
        for (int i = 1; i < n; i++)
        {
            val ^= arr[i];
        }
        if (val == 0)
        {
            cout << "YES\n";
        }
        else
        {
            if (n % 2 == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}
