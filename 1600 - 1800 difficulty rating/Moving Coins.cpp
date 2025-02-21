#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int b[1001];
        for (int i = 0; i < 1001; i++)
            b[i] = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[x] = 1;
        }
        long long int ans = 0, coins = 0;
        for (int i = 1000; i > 0; i--)
        {
            if (b[i] == 1)
                coins++;
            else
            {
                if (coins > 0)
                {
                    if (coins > k)
                    {
                        ans = ans + (coins / k);
                        if (coins % k > 0)
                            ans = ans + 1;
                    }
                    else
                    {
                        ans = ans + 1;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}
