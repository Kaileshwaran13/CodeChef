#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, h, y1, y2, l, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> h >> y1 >> y2 >> l;
        long long cnt = 0, f = 0;
        for (i = 0; i < n; i++)
        {
            long long tp, x;
            cin >> tp >> x;
            if (tp == 1)
            {
                if ((h - y1) <= x && !f)
                    ++cnt;
                else if (l > 0)
                {
                    --l;
                    ++cnt;
                    if (l == 0)
                    {
                        --cnt;
                        f = 1;
                    }
                }
            }
            else
            {
                if ((y2) >= x && !f)
                    ++cnt;
                else if (l > 0)
                {
                    --l;
                    ++cnt;
                    if (l == 0)
                    {
                        --cnt;
                        f = 1;
                    }
                }
            }
        }
        cout << cnt << "\n";
    }
}
