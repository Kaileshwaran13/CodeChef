#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        float d, u, n, idx = 0;
        cin >> d >> u >> n;
        float cur = d * u;
        for (int i = 1; i <= n; i++) {
            float x, y, z;
            cin >> x >> y >> z;
            float val = (z + (x * u * y)) / x;
            if (cur > val) {
                cur = val;
                idx = i;
            }
        }
        cout << idx << endl;
    }
    return 0;
}
