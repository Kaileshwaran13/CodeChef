#include<bits/stdc++.h>
using namespace std;

int main() {
    vector < long long > v(65, 0);
    v[1] = 1;
    for (int i = 2; i < 65; i++) {
        if (i & 1) {
            v[i] = v[i - 1] / ((i - 1) / 2 + 1) * i;
        }
        else {
            v[i] = 2 * v[i - 1];
        }
    }
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        long long n;
        cin >> n;
        int ans = lower_bound(v.begin(), v.end(), n) - v.begin();
        cout << ans << endl;
    }
    return 0;
}
