#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n == 1) {
            cout << 2 << endl;
            continue;
        }
        long long power = log2(n) + 1;
        long long num = (1 << power) - 1;
        if (num == n) {
            cout << (n / 2) << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
