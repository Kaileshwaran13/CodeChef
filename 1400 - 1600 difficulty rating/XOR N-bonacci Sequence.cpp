#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    vector < long long > a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector < long long > v(n);
    long long s = 0;
    for (long long i = 0; i < n; i++) {
        s ^= a[i];
        v[i] = s;
    }
    while (q--) {
        long long k;
        cin >> k;
        if (k % (n + 1) == 0) {
            cout << "0" << endl;
        }
        else {
            cout << v[k % (n + 1) - 1] << endl;
        }
    }

}
