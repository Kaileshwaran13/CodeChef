#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, m;
        cin >> n >> m;
        long long int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int sum = 0, c = 0;
        sort(arr, arr + n);
        for (int i = 0; i < n; i++) {
            sum += arr[n - i - 1];
            c++;
            if (sum >= m) {
                break;
            }
        }
        if (sum >= m) {
            cout << c << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
