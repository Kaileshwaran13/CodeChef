#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                sum += (long long)(a[i] * a[j]);
            }

        }
        cout << sum << '\n';
    }
    return 0;
}
