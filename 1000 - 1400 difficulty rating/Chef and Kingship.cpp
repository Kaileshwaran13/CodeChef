#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        vector < long long > v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        long long result = 0;

        sort(v.begin(), v.end());

        for (int i = 1; i < n; i++)
            result += (v[0] * v[i]);

        cout << result << endl;
    }
}
