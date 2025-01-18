#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long min = INT_MAX;
        long long arr[n];
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        cout << min * (n - 1) << '\n';
    }
}
