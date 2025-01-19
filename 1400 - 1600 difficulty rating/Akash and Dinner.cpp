#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, sum = 0;
        cin >> n >> k;
        long long cat[n];
        long long time[n];
        for (int i = 0; i < n; i++) 
            cin >> cat[i];
        for (int i = 0; i < n; i++) 
            cin >> time[i];
        multimap < int, int > mpp;
        set < int > s;
        for (int i = 0; i < n; i++) {
            mpp.insert(make_pair(time[i], cat[i]));
        }
        for (auto x: mpp) {
            if (s.find(x.second) == s.end()) {
                s.insert(x.second);
                sum += x.first;
                k--;
                if (k == 0) 
                    break;
            }
        }
        if (k != 0) 
            cout << -1 << endl;
        else
            cout << sum << endl;
    }
}
