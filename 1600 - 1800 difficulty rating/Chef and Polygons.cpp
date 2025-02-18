#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<pair<long long, long long>> v1(n);
        for (int i = 0; i < n; ++i) {
            long long cor;
            cin >> cor;
            long long max_val = 0;
            for (int j = 0; j < cor; ++j) {
                long long x, y;
                cin >> x >> y;
                max_val = max(max_val, max(abs(x), abs(y)));
            }
            v1[i] = {max_val, i};
        }
        sort(v1.begin(), v1.end());
        vector<long long> ans(n,0);
        for(int i=0;i<n;i++){
	        ans[v1[i].second]=i;
	    }
        for (int i=0; i<n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
