#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        cout << (x ^ __bit_floor(x)) << " " << __bit_floor(x) << endl;
    }
}
