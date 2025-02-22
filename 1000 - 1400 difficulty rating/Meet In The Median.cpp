#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T;
    cin >> T;
    for (long long i = 1; i <= T; ++i) {
        long long n, k;
        cin >> n >> k;
        vector < pair < long long, long long >> arrayZ(n);
        for (int i = 0; i < n; ++i) {
            cin >> arrayZ[i].first;
            arrayZ[i].second = i;
        }
        sort(arrayZ.begin(), arrayZ.end());
        int indx = n - k + (k - 1) / 2;
        cout << arrayZ[indx].first << '\n';
        vector < pair < long long, long long >> v;
        for (int i = n - k; i < n; ++i) {
            v.push_back({
                arrayZ[i].second,
                arrayZ[i].first
            });
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < k; ++i) {
            cout << v[i].second << " \n" [i == k - 1];
        }
    }
    return 0;
}
