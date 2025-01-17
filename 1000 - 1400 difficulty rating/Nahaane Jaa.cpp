#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, k;
        cin >> n >> k;
        int ar[100000];
        int flag = 0;
        vector < long long > v;
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        long long l;
        if (n == 1 && ar[0] == k)
        {
            cout << "YES" << '\n';
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (ar[i] == k)
                    v.push_back(i);
            }
            if (v.size() != 0)
            {
                if (v[0] != n - 1)
                    cout << "Yes" << '\n';
                else
                    cout << "No" << '\n';
            }
            else
                cout << "No" << '\n';
        }
    }
}
