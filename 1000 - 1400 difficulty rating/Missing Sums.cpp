#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n + n - 1; i += 2) {
            cout << i << " ";
        }
        cout << '\n';
    }
}
