#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    long double ar1 = INT_MIN, ar2 = INT_MAX;
    cin >> n;
    int f = 0, s = 0;
    for (int i = 1; i <= n; i++)
    {
        long double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        long double ar = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) * 0.5;
        if (ar >= ar1)
        {
            ar1 = ar;
            f = i;
        }
        if (ar <= ar2)
        {
            ar2 = ar;
            s = i;
        }
    }
    cout << s << " " << f << endl;
    return 0;
}
