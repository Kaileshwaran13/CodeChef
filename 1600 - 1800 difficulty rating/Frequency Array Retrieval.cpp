#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, c = 0;
        cin >> n;
        ll a[n];
        map < ll, ll > m;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for (auto i: m)
        {
            if (i.second % i.first != 0)
                c++;
        }
        if (c > 0)
            cout << "-1";
        else
        {
            ll j = 1;
            ll b[n];
            map < ll, ll > p;
            for (i = 0; i < n; i++)
            {
                if (m[a[i]] % a[i] == 0)
                {
                    m[a[i]]--;
                    b[i] = j;
                    p[a[i]] = j;
                    j++;
                }
                else
                {
                    b[i] = p[a[i]];
                    m[a[i]]--;
                }
            }
            for (i = 0; i < n; i++)
                cout << b[i] << " ";
        }
        cout << endl;
    }
}
