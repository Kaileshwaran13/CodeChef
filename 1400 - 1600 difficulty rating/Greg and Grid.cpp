#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    n = n + m;
    vector < bool > v(n + 1, true);
    v[0] = false;
    v[1] = false;
    int ans = 0;
    for (int i = 2;
        (i * i) <= n; i++) {
        if (v[i] == true) {
            for (int j = i * i; j <= n; j += i)
                v[j] = false;
        }
    }
    for (bool x: v) {
        if (x) ans++;
    }
    cout << ans << endl;
    return 0;
}
