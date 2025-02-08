#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long mini = * min_element(arr, arr + n);
        if (arr[0] == mini && arr[n - 1] == mini) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
