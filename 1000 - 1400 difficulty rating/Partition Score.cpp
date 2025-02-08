#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if (k == 1) {
            cout << 2 * arr[n - 1] + arr[0] + arr[n - 2] << endl;
        }
        else {
            cout << arr[0] + arr[n - k - 1] + arr[n - 2] + arr[n - 1] << endl;
        }
    }
}
