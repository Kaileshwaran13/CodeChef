#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a = 0, b = 0;
        while (n--) {
            int x, y;
            cin >> x >> y;

            int sum1 = 0, sum2 = 0;
            while (x > 0 || y > 0) {
                if (x > 0) {
                    sum1 += x % 10;
                    x /= 10;
                }
                if (y > 0) {
                    sum2 += y % 10;
                    y /= 10;
                }
            }
            if (sum1 > sum2)
                a++;
            else if (sum2 > sum1)
                b++;
            else {
                a++, b++;
            }
        }
        if (a > b)
            cout << 0 << " " << a << endl;
        else if (b > a)
            cout << 1 << " " << b << endl;
        else 
            cout << 2 << " " << a << endl;
    }
}
