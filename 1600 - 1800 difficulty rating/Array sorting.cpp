#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], g = 0, x;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            g = gcd(g, abs(x - i));
        }
        cout << g << endl;
    }
}
