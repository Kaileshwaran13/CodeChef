#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n;
    int curr;
    int arr[205];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> curr;
        sort(arr, arr + n);

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > curr && arr[i] <= 2 * curr) {
                swap(arr[i], curr);
            }
            ans += arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}
