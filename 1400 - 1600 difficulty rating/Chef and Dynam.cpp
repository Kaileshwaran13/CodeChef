#include <bits/stdc++.h>
using namespace std;

int main()
{
    int kaushal;
    cin >> kaushal;
    while (kaushal--) {
        int n;
        cin >> n;
        long long s, a, b, c, d, e;
        cin >> a;
        long long max = pow(10, n);
        long long min = pow(10, n - 1);
        s = max * 2;
        s += a;
        cout << s << flush << endl;
        cin >> b;
        c = (max - b);
        cout << c << flush << endl;
        cin >> d;
        e = (max - d);
        cout << e << flush << endl;
        int ans;
        cin >> ans;
        if (ans == -1)
            exit(0);
    }
    return 0;
}
