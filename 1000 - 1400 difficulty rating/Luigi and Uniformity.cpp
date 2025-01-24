#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int nu = a[0], ans = 0;
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i] > nu)
            {
                if(gcd(nu, a[i]) != nu)
                {
                    ans = n;
                    break;
                }
            else
            {
                ans++;
            }
            }
        }
        cout << ans << endl;
    }
}
