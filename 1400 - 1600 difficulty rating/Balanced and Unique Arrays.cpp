#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 4)
            cout << "NO\n";
        else
        {
            vector < long long > a, b;
            cout << "YES\n";
            i = 1;
            j = n;
            while (i <= j)
              {
                a.push_back(i);
                a.push_back(j);
                i += 2;
                j -= 2;
            }
            sort(a.begin(), a.end());
            for (auto x: a)
                cout << x << " ";
            cout << "\n";
            i = 2 ;
            j = n - 1;
            while (i <= j)
            {
                b.push_back(i);
                b.push_back(j);
                i += 2;
                j -= 2;
            }
            sort(b.begin(), b.end());
            for (auto x: b)
                cout << x << " ";
            cout << "\n";
        }
    }
}
