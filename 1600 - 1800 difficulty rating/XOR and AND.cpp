#include <bits/stdc++.h>
#define int long long int
using namespace std;

int lsb(int n)
{
    int pos = 1;
    while (n > 0)
    {
        n = n >> 1;
        pos++;
    }
    return pos;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--)
    {
        int setbit[33] = {0};
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            temp = lsb(temp);
            setbit[temp]++;
        }
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            ans += ((setbit[i]) * (setbit[i] - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
