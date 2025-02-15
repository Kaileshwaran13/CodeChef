#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        bool ok = true;
        for(int i = 0; i < n - 1; i++)
        {
            if (a[i] % a[i + 1] != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            for(int i = 0;i < n; i++) 
                cout << a[i] << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}
