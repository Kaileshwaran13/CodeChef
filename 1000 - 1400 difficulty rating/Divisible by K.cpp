#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            k /= gcd(k, p[i]);
        }
        if (k == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
