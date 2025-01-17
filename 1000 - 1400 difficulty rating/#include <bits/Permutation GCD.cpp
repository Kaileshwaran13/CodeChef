#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        if (n > s || s - (n - 1) > n)
            cout << -1;
        else {
            cout << s - (n - 1) << " ";
            for (int i = 1; i < n; i++) {
                if (i == s - (n - 1))
                    cout << n << " ";
                else
                    cout << i << " ";
            }
        }
        cout << '\n';
    }
}
