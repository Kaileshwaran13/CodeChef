#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, s = 0;
        cin >> n;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int u = 0, q = 0, e = 1;
        for (long long int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                u = u + n - e;
                e++;
            }
            if (a[i] == 2)
                q++;
        }
        u = u + (q * (q - 1) / 2);
        cout << u << endl;
    }
    return 0;
}
