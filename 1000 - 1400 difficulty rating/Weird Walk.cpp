#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int c = 0;
        int d = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i] and c == d)
            {
                count += a[i];
            }
            else
            {
                c += a[i];
                d += b[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}
