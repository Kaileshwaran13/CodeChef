#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int bad;
        if (n >= 2 && arr[0] < arr[1] - 1) {
            bad = arr[0];
        } else if (n >= 2 && arr[n - 1] > arr[n - 2] + 1) {
            bad = arr[n - 1];
        } else {
            for (int i = 1; i < n; i++) {
                if (arr[i] == arr[i - 1]) {
                    bad = arr[i];
                    break;
                }
            }
        }
        cout << bad << '\n';
    }
}
