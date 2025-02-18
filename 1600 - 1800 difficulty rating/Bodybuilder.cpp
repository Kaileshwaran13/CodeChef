#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        long long maxi = b[0];
        long long s = maxi;
        for (int i = 1; i < n; i++) {
            s -= (a[i] - a[i - 1]) * r;
            s = max(0LL, s); 
            s += b[i];      
            maxi = max(maxi, s);
        }
        cout << maxi << endl;
    }
    return 0;
}
