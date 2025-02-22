#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a, d, l, r;;
        cin >> a >> d >> l >> r;
        long long c = a, cnt = 0;
        vector < long long > v(10, 0);
        for (long long i = 1; i <= 9; i++) {
            long long k = c + cnt, x = 0;
            while (true) {
                while (k > 0) {
                    x += k % 10;
                    k /= 10;
                }
                k = x;
                x = 0;
                if (k < 10) {
                    break;
                }
            }
            v[i] = k;
            cnt += d;
        }
        long long sum = 0;
        for (long long i = 1; i <= 9; i++) {
            sum += v[i];
        }
        long long sum2 = (r / 9) * sum;
        long long n = r % 9;
        long long sum3 = 0;
        sum3 += ((l - 1) / 9) * sum;
        for (long long i = 1; i <= (l - 1) % 9; i++) {
            sum3 += v[i];
        }
        sum2 -= sum3;
        for (long long j = 1; j <= n; j++) {
            sum2 += v[j];
        }
        cout << sum2 << endl;
    }
    return 0;
}
