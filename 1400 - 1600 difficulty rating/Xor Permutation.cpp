#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 4)
            cout << -1 << endl;
        else if (n == 4)
        {
            int j = 1, l = 4;
            while (j <= 2)
            {
                cout << j++ << " ";
            }
            while (l > 2)
            {
                cout << l-- << " ";
            }
        }
        else
        {
            cout << 3 << " " << 4 << " " << 2 << " " << 1 << " ";
            int k = 5;
            while (k < n)
                cout << k++ << " ";
            cout << n;
            cout << endl;

        }
    }
    return 0;
}
