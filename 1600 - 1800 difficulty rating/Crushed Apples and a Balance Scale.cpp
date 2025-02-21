#include <bits/stdc++.h>
#define int long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        if (m < n)
            cout << "NO" << endl;
        else if (m == n)
            cout << "YES" << endl;
        else
        {
            if (m % 2 == 1)
                cout << "NO" << endl;
            else
            {
                int a = m;
                while (a % 2 == 0)
                {
                    a = a / 2;
                }
                if (n % a == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}
