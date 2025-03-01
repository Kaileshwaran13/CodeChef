#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int t = 1; t <= test_cases; t++) {
        int n;
        long long k;
        cin >> n >> k;
        vector < long long > arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        long long max_val = arr[n - 1];
        for (int i = 0; i < n - 1; i++) {
            long long tmp = (max_val - arr[i]) / k;
            arr[i] = arr[i] + (tmp * k);
        }
        long long min_val = arr[n - 1];
        for (int i = 0; i < n; i++) {
            min_val = min(min_val, arr[i]);
        }
        long long ans1 = max_val - min_val;
        sort(arr.begin(), arr.end());
        max_val = arr[n - 1];
        for (int i = 0; i < n; i++) {
            ans1 = min(ans1, max_val - arr[i]);
            max_val = max(max_val, arr[i] + k);
        }
        cout << ans1 << endl;
    }
    return 0;
}
