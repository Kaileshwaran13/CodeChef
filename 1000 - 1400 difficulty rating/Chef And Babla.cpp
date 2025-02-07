#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long int a[n];
        long long int min_pos = INT_MAX;
        long long int max_neg = INT_MIN;
        for (long long int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < 0)
                max_neg = max(max_neg, a[i]);
            else
                min_pos = min(min_pos, a[i]);
        }
        if (abs(max_neg) > min_pos) {
            cout << min_pos - 1 << endl;
        }
        else
            cout << abs(max_neg) - 1 << endl;
    }
    return 0;
}
