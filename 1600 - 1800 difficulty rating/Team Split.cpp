#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int i, n, c2, c1;
    long long int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        vector < long long int > ans(1000001, 0);
        c2 = c1 = 0;
        cin >> n >> a >> b >> c >> d;
        ans[d]++;
        for (i = 1; i < n; i++)
        {
            d = ((a * (d * d) + (b * d) + c) % 1000000);
            ans[d]++;
        }
        bool flag = true;
        for (i = 1000000; i >= 0; i--)
        {
            if (flag && ans[i] % 2 != 0)
            {
                c1 = c1 + i;
                flag = false;
            }
            else if (ans[i] % 2 != 0 && flag == false)
            {
                c2 = c2 + i;
                flag = true;
            }
        }
        cout << abs(c1 - c2) << endl;
    }
}
