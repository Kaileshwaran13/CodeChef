#include <bits/stdc++.h>
using namespace std;

int main() {

    long long t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        long long sum = (n * (n + 1)) / 2 + n - 1;
        cout << sum << endl;
    }
}
