#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        while (k) {
            int evemax = INT_MIN, oddmin = INT_MAX;
            int oddindex, eveindex;
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0 && a[i] > evemax) {
                    evemax = a[i];
                    eveindex = i;
                }
                else if (i % 2 != 0 && a[i] < oddmin) {
                    oddmin = a[i];
                    oddindex = i;
                }
            }
            if (evemax > oddmin) {
                a[eveindex] = oddmin;
                a[oddindex] = evemax;
                k--;
            }
            else 
                break;
        }
        int motu = 0, tomu = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                motu += a[i];
            else
                tomu += a[i];
        }
        if (tomu > motu) 
            cout << "YES" << '\n';
        else 
            cout << "NO" << '\n';
    }
}
