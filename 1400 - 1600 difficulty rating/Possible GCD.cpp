#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long x = 0;
        long long count = 0;
        if (a == b) {
            cout << 1 << endl;
            continue;
        }
        long long d = abs(a - b);
        for (long long i = 1; i * i <= d; i++) {
            if (d % i == 0) {
                count++;

                if (i * i != d)
                    count++;
            }
        }
        cout << count << endl;
    }
}
