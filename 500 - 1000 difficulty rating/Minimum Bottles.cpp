#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector < int > water(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> water[i];
            sum += water[i];
        }

        int ans = ceil((double) sum / (double) x);
        cout << ans << endl;
    }
}
