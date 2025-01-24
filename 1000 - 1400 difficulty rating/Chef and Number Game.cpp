#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long n;

        cin >> n;

        long a[n];
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] < 0)
            {
                cnt++;
            }
        }

        if (cnt == 0 || cnt == n)
        {
            cout << n << " " << n << endl;
        }
        else if (cnt > abs(n - cnt))
        {
            cout << cnt << " " << n - cnt << endl;
        }
        else
        {
            cout << n - cnt << " " << cnt << endl;
        }
    }
}
