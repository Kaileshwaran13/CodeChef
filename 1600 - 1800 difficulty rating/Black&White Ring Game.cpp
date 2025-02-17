#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long one = 0, zero = 0;
        for (long long i = 0; i < (n - 1); i++) {
            if (a[i] == 0 && a[i] == a[i + 1]) {
                zero++;
            }
            if (a[i] == 1 && a[i] == a[i + 1]) {
                one++;
            }
        }
        if (a[n - 1] == 0 && a[n - 1] == a[0]) {
            zero++;
        }
        if (a[n - 1] == 1 && a[n - 1] == a[0]) {
            one++;
        }
        long long mini = min(one, zero);
        if (mini % 2 == 0) {
            cout << "Bob" << endl;
        }
        else {
            cout << "Alice" << endl;
        }
    }
}
