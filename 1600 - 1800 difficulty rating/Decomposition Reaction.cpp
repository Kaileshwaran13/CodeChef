#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    unordered_map < long long, long long > um;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        um[i + 1] = x;
    }
    for (int l = 0; l < m; l++) {
        long long x, y;
        cin >> x >> y;
        long long z = um[x];
        um[x] = 0;
        for (int j = 0; j < y; j++) {
            long long q, w;
            cin >> q >> w;
            um[w] += (q * z);
            um[w] = (um[w] % 1000000007);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << um[i + 1] << endl;
    }
    return 0;
}
