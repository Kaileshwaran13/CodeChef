#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long day, d, p, q;
        cin >> day;
        cin >> d >> p >> q;
        long seri = day / d, left_sum = 0, rem = day % d;
        long long div_sum = (seri * (2 * p + (seri - 1) * q)) / 2;
        div_sum *= d;
        if (day % d != 0) {

            left_sum = rem * (p + seri * q);
        }
        long long sum = div_sum + left_sum;
        cout << sum << endl;
    }
}
