#include <bits/stdc++.h>
using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector < int > arr(n);
        for (int i = 0; i < n; ++i) cin >> arr[i];
        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }
        int initial_sum = 0;
        for (int i = 1; i < n; ++i) {
            initial_sum += abs(arr[i] - arr[i - 1]);
        }
        int max_increase = 0;
        for (int i = 1; i < n - 1; ++i) {
            int replace_with_1 = abs(1 - arr[i - 1]) + abs(1 - arr[i + 1]) - abs(arr[i] - arr[i - 1]) - abs(arr[i] - arr[i + 1]);
            int replace_with_k = abs(k - arr[i - 1]) + abs(k - arr[i + 1]) - abs(arr[i] - arr[i - 1]) - abs(arr[i] - arr[i + 1]);
            max_increase = max(max_increase, max(replace_with_1, replace_with_k));
        }
        max_increase = max(max_increase, abs(1 - arr[1]) - abs(arr[0] - arr[1]));
        max_increase = max(max_increase, abs(k - arr[1]) - abs(arr[0] - arr[1]));
        max_increase = max(max_increase, abs(1 - arr[n - 2]) - abs(arr[n - 1] - arr[n - 2]));
        max_increase = max(max_increase, abs(k - arr[n - 2]) - abs(arr[n - 1] - arr[n - 2]));
        cout << initial_sum + max_increase << '\n';
    }
}
