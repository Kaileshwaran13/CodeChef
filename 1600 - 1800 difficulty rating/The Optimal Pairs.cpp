#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int f = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0)
                f += (i != n / i ? 2 : 1);
        }
        cout << 2 * (f - 1) - !(n & 1) << endl;
    }
}
