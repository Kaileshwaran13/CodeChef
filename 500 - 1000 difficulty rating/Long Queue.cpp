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
        int sw = (a[n - 1]) / 2;
        int final = n;
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] <= sw) {
                final--;
            } else break;
        }
        cout << final << endl;
    }
}
