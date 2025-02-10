#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--)
    {
        map < int, int > m;
        long long int n, c = 1, r = 0, i;
        cin >> n;
        long long int a[n];
        int h = (pow(10, 9) + 7);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (auto i: a)
        {
            m[i]++;
        }
        for (i = 1; i <= n; i++)
        {
            c = c * m[i];
            c = c % h;
            r = r + c;
            r = r % h;
        }
        cout << r << endl;

    }
    return 0;
}
