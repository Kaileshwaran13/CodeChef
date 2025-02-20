#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t = 0;
    cin >> t;
    while (t--) {
        long long n, b, c;
        cin >> n >> b >> c;
        c--;
        std::vector < long long > a(n, 0);
        for (long long i = n - 1; i >= 0; i--) {
            if (c <= 0) {
                break;
            }
            a[i] = c % b;
            c /= b;
        }
        for (long i = 0; i < n; i++) {
            cout << a[i] + 1 << " ";
        }
        cout << endl;
    }
}
