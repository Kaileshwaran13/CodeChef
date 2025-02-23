#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, sum = 0;
        cin >> n >> k;
        long long int q = n;
        vector < pair < long long int, long long int >> v;
        while (q--) {
            long long int c, w;
            cin >> c >> w;
            v.push_back({c,w});
        }
        for (int i = 0; i < (1 << n); i++) {
            long long int c = 0, w = 0;
            for (int j = 0; j < n; j++) {
                if ((i / (1 << j)) % 2 != 0) {
                    c += v[j].first;
                    w += v[j].second;
                }
            }
            if (c <= k) {
                sum = max(sum, w);
            }
        }
        cout << sum << endl;
    }
}
