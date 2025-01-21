#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0) {
            if (k == n / 2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            if (k == n / 2 + 1 || k == n / 2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

}
