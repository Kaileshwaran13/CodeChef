#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int i = 0;
        int sum = 0;
        sum += a[n / 2];
        sum = abs(sum - a[(n / 2) - 1]);
        cout << sum << endl;
    }
    return 0;
}
