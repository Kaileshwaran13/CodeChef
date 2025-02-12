#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, c = 0;
    cin >> n;
    vector < long long > a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        c += a[i];
    }
    cout << max(n, (c + 1) / 2) << endl;
}
