#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, b, m;
        cin >> n >> b >> m;
        int a[m];
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        int x = a[0] / b;
        int an = 1;
        for (int i = 0; i < m; i++) {
            if (a[i] / b != x) {
                an++;
                x = a[i] / b;
            }
        }
        cout << an << '\n';
    }
}
