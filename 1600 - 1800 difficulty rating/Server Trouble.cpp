#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n % k == 0) {
            cout << (n / k) << " " << k << endl;
        }
        else {
            cout << 1 + (n / k) << " " << (n % k) << endl;
        }
    }
    return 0;
}
