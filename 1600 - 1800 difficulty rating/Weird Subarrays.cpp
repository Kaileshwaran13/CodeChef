#include <iostream>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int inc[n], dec[n];
        inc[n - 1] = 1;
        dec[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                inc[i] = inc[i + 1] + 1;
            } else {
                inc[i] = 1;
            }
        }

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] > arr[i + 1]) {
                dec[i] = dec[i + 1] + 1;
            } else {
                dec[i] = 1;
            }
        }
        ll ans = 0;

        for (int i = 0; i < n; i++) {
            if (inc[i] > 1) {
                ans = ans + inc[i];
            } else if (dec[i] > 1) {
                ans = ans + dec[i];
                int idx = i + dec[i];
                if (idx < n) {
                    ans = ans + inc[idx];
                }
            } else if (inc[i] == 1) {
                ans = ans + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
