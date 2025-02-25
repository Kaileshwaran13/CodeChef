#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int count = (n / 2) + (n % 2);
        if (count % 2 == 0) {
            cout << n << endl;
        }
        else {
            cout << n - 1 << endl;
        }
    }
    return 0;
}
