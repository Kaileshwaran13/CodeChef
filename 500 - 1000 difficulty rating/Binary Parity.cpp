#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        long long parity = 0;
        cin >> n;
        while (n) {
            parity += (n & 1);
            n = n >> 1;
        }
        if (parity & 1) {
            cout << "ODD";
        } else {
            cout << "EVEN";
        }
        cout << '\n';
    }

}
