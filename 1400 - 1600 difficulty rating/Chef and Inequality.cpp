#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d <= a) cout << 0 << endl;
        else if (c <= b && c >= a && d >= b) {
            ll sum = (d - b) * (b - a + 1);
            sum += ((b - a) * (b - a + 1)) / 2;
            sum -= ((c - a - 1) * (c - a)) / 2;
            cout << sum << endl;
        }
        else if (c <= b && c >= a && d <= b) {
            ll sum = ((d - a) * (d - a + 1)) / 2;
            sum -= ((c - a) * (c - a - 1)) / 2;
            cout << sum << endl;
        }
        else if (c <= a && d <= b) {
            cout << ((d - a) * (d - a + 1)) / 2 << endl;
        }
        else if (c <= a && d >= b) {
            ll sum = (b - a + 1) * (d - b);
            sum += ((b - a) * (b - a + 1)) / 2;
            cout << sum << endl;
        }
        else if (c >= b) 
            cout << (b - a + 1) * (d - c + 1) << endl;
        else 
            cout << 0 << endl;

    }
    return 0;
}
