#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;

int main() {
    int t;
    cin >> t;
    int x = 0;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector < ll > arr(n);
        for (ll i = 0; i < n; i++) cin >> arr[i];
        ll x = 3 * n;
        ll tot = (k / n) % 3;
        if (n & 1 && k >= n) {
            arr[n / 2] = 0;
        }
        while (tot--) {
            for (ll i = 0; i < n; i++) {
                ll idx1 = i % n;
                ll idx2 = n - (i % n) - 1;

                arr[idx1] = arr[idx1] ^ arr[idx2];
            }
        }
        if (k % n) {
            for (int i = 0; i < (k % n); i++) {
                arr[i] ^= arr[n - (i) - 1];
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";

    }
    return 0;
}
