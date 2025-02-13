#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, k;
    cin >> t;
    while (t--) {
        cin >> n;
        vector < long long > arr(n + 1), b(n + 1), c(n + 1);
        for (long long i = 1; i <= n; i++) {
            cin >> arr[i];
            b[i] = 0;
        }
        bool found = false;
        for (long long i = 1; i <= n; i++) {
            b[arr[i]] = 1;
        }
        for (long long i = 1; i <= n; i++) {
            if (b[i]) {
                found = found | c[arr[i]];
                c[arr[i]] = 1;
            }
        }
        if (found) {
            cout << "Truly Happy\n";
        } else {
            cout << "Poor Chef\n";
        }
    }
    return 0;
}
