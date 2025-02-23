#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long x, d;
        cin >> x >> d;
        long long temp = x, count = 0, ans = 0;
        while (temp > 0)
        {
            long long rem = temp % 10;
            count++;
            temp = temp / 10;
            if (rem == d)
            {
                if (d == 0)
                {
                    string num = string(count, '1');
                    temp = temp * pow(10, count) + stoi(num);
                }
                else
                {
                    temp = temp * pow(10, count) + (rem + 1) * pow(10, count - 1);
                }
                ans = temp - x;
                count = 0;
            }
        }
        cout << ans << endl;
    }
}
