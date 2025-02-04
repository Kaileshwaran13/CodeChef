#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;
        long int b[n], g[n];
        for (long int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (long int i = 0; i < n; i++) {
            cin >> g[i];
        }
        sort(b, b + n, greater < long int > ());
        sort(g, g + n);
        long int t[n];
        for (long int i = 0; i < n; i++) {
            int sum_g_b = g[i] + b[i];
            t[i] = sum_g_b;
        }
        cout << * max_element(t, t + n) << endl;
    }
    return 0;
}
