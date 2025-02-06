#include <bits/stdc++.h>

#define ll long long int
using namespace std;

bool is_prime(ll n)
{
    ll i;
    if (n == 1)
        return false;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ll t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1 || b == 1)
            cout << "-1\n";
        else if ((a % 3 == 0 && b % 3 == 0) || __gcd(a, b) > 1)
            cout << "0\n";
        else if (a & 1 || b & 1)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
