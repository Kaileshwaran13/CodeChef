#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, n, a, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int e = 0;
        long long int o = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            if (a & 1)
            {
                o++;
            }
            else
                e++;
        }
        cout << e * o << '\n';
    }
}
