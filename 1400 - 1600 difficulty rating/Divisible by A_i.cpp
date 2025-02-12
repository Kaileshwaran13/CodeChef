#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, hcf = 0;
        cin >> n;
        vector < int > v(n);
        for(int i = a; i < b; i++){
            cin >> v[i];
            hcf = __gcd(hcf, v[i]);
        }
        rep(i, 0, n)
        {
            cout << v[i] / hcf << " ";
        }
        cout << endl;
    }
    return 0;
}
