#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fun(ll n)
{
    return (n * (n - 1)) / 2;
}
int main() {
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], i;
        unordered_map < int, int > m;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        ll sum = 0;
        for (auto l: m)
        {
            sum = sum + fun(l.second);
        }
        ll n1 = fun(n);
        cout << (n1 - sum) << endl;
    }
    return 0;
}
