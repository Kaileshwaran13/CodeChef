#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long t;
    while (q--) {
        cin >> t;
        if (arr[0] <= t && arr[n - 1] >= t) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

}
