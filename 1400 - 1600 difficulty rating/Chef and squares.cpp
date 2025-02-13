#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n][n];
        for (int i = (n - 1) / 2; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                if ((n - j - i + (n - 1) / 2) <= n) 
                    a[i][j] = n - j - i + (n - 1) / 2;
                else 
                    a[i][j] = (n - j - i + (n - 1) / 2) % n;
            }
        }
        for (int i = n - 1; i >= (n + 1) / 2; i--) {
            for (int j = 0; j < n; j++) {
                if ((n - j - i + (n - 1) / 2) > 0) 
                    a[i][j] = n - j - i + (n - 1) / 2;
                else 
                    a[i][j] = (n - j - i + (n - 1) / 2) + n;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << "\n";
        }
    }
}
