#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if ((n / k) % k == 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

}
