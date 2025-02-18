#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    while (num--)
    {
        long long n, d, s = 0;
        cin >> n >> d;
        long long ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            s += ar[i];
        }
        if (s % n != 0)
            cout << -1 << endl;
        else
        {
            long long t = s / n, ss = 0, c = 0, nb = 0;
            bool f = true;
            for (int i = 0; i < d; i++)
            {
                ss = 0, c = 0;
                long long c1 = 0;
                for (int j = i; j < n; j += d)
                {
                    ss = ss + ar[j];
                    c++;
                }
                if (ss != c * t)
                {
                    cout << -1 << endl;
                    f = false;
                    break;
                }
                else
                {
                    for (int j = i; j < n; j += d)
                    {
                        c1 += (ar[j] - t);
                        nb += abs(c1);
                    }
                }
            }
            if (f)
                cout << nb << endl;
        }

    }
}
