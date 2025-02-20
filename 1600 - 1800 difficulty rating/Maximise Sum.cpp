#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, sum = 0;
        cin >> n;
        long long int a[n], b[n], c[n];
        for (long long int i = 0; i < n; i++)
            cin >> a[i];
        b[0] = a[0];
        c[n - 1] = a[n - 1];
        for (long long int i = 1; i < n; i++)
            b[i] = max(a[i], b[i - 1]);
        for (long long int i = n - 2; i >= 0; i--)
            c[i] = max(a[i], c[i + 1]);

        for (int i = 0; i < n; i++)
            sum += min(c[i], b[i]);
        cout << sum << endl;
    }
    return 0;
}
