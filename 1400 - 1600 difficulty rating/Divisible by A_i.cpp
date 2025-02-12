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
        for(int i = 0; i < n; i++){
            cin >> v[i];
            hcf = __gcd(hcf, v[i]);
        }
        for(int i = 0; i < n; i++){
            cout << v[i] / hcf << " ";
        }
        cout << endl;
    }
    return 0;
}
