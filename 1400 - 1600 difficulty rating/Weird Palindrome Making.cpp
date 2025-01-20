#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, a_i, odd = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a_i;
            if (a_i % 2) odd++;
        }
        cout << odd / 2 << '\n';
    }
}
