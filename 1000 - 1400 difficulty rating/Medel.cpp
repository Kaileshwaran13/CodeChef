#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, max = 0, min = 100000, m, x;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (max < a[i]) {
                max = a[i];
                m = i;
            }
            if (min > a[i]) {
                min = a[i];
                x = i;
            }
        }
        if (x < m) 
            cout << min << " " << max << endl;
        else 
            cout << max << " " << min << endl;

    }
    return 0;
}
