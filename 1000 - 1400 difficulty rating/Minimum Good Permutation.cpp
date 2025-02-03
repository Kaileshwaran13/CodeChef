#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++) {
            a[i - 1] = i;
        }
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == i + 1) {
                swap(a[i], a[i + 1]);
            }
        }
        if (n % 2 != 0) {
            swap(a[n - 1], a[n - 2]);
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
