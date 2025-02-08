#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > brr(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> brr[i];
        }
        sort(brr.begin(), brr.end());
        vector < int > arr(n);
        arr[0] = brr[0] / 2;
        for (int i = 1; i < n; i++) {
            arr[i] = abs(brr[i - 1] - arr[i - 1]);
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
