#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int i;
        long long a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long j, k, c = 0;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                for (k = j + 1; k < n; k++)
                {
                    if ((a[j] - a[i]) == (a[k] - a[j]))
                    {
                        c++;
                        break;
                    }
                }
                if (c == 1)
                    break;
            }
            if (c == 1)
                break;
        }
        if (c == 1)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}
