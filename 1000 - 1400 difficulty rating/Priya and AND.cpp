#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, b, x, y, p, c = 0, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int k = i + 1; k < n; k++) {
            x = a[i] & a[k];
            if (x == a[i]) c++;
        }
    }
    cout << c << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
