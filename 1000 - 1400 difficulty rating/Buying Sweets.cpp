#include <iostream>

#include<bits/stdc++.h>

#include<algorithm>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, x, sum = 0;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum = sum + a[i];
        }
        sort(a, a + n);
        if (sum % x == 0) cout << (sum / x) << endl;
        else if (sum % x != 0) {
            if (a[0] <= (sum % x)) cout << -1 << endl;
            else cout << (sum / x) << endl;
        }

    }
    return 0;
}
