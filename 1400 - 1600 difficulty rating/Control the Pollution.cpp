#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int ans = 0;
        int bus = x;
        int car = 25 * y;
        int count = n / 100;
        int rem = n % 100;
        //update answer
        ans = count * min(car, bus);
        car = rem / 4;
        if (rem % 4 != 0)
        {
            car++;
        }
        bus = rem / 100;
        if (rem % 100 != 0)
        {
            bus++;
        }
        ans = ans + min(car * y, bus * x);
        cout << ans << '\n';
    }
}
