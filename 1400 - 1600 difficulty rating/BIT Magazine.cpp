#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int f;
        cin >> f;
        int sum = n * (n + 1) / 2;
        int arr[f];
        for (int i = 0; i < f; i++) {
            cin >> arr[i];
            sum = sum - arr[i];
        }
        int pg;
        cin >> pg;
        int a = (n + 1) / 2;
        cout << fixed << setprecision(4) << ((a - pg) * 1.0 / a) * sum << endl;
    }
}
