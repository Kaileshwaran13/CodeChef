#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, g, b, k;
        int r_prob, g_prob, b_prob;
        cin >> r >> g >> b >> k;
        r_prob = (r >= k) ? k - 1 : r;
        g_prob = (g >= k) ? k - 1 : g;
        b_prob = (b >= k) ? k - 1 : b;
        cout << (long long int) r_prob + g_prob + b_prob + 1 << endl;
    }
}
