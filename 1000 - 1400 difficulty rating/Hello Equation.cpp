#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        if (x < 5)
        {
            cout << "NO" << '\n';
        }
        else
        {
            int flag = 0;
            for (int a = 1; a < sqrt(x); a++)
            {
                if ((x - (2 * a)) % (a + 2) == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "NO" << '\n';
            }
            else
            {
                cout << "YES" << '\n';
            }
        }
    }
}
