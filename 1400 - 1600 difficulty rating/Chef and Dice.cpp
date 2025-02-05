#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n, sum = 0, s;
        cin >> n;
        s = n % 4;
        if (s == 0) {
            sum += 60;
            s = 4;
        }
        else if (s == 1)
            sum += 20;
        else if (s == 2)
            sum += 36;
        else
            sum += 51;

        n = ceil(n / 4.0) - 1;
        if (n == 0)
            cout << sum << endl;
        else
            cout << sum + (s * 11) + (4 - s) * 15 + (n - 1) * 44 << endl;
    }
    return 0;
}
