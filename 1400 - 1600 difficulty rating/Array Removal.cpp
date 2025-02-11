#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long p = 0, orr = 0;
        for (int i = 0; i < n; i++)
        {
            orr = (orr | a[i]);
            if ((orr & (orr + 1)) == 0 )
            {
                p = i + 1;
            }
        }
        if (p == 0 )
            cout << n << endl;
        else
            cout << n - p << endl;
    }

}
