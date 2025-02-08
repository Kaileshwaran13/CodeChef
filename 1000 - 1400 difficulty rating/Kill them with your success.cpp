#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        double arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        double cnc = arr[n - 1];
        for (int i = 1; i < n; i++) {
            cnc = (cnc + arr[n - i - 1]) / 2.0;
        }
        cout << fixed << setprecision(10) << cnc << endl;
    }
}
