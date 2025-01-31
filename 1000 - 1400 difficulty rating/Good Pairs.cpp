#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        unordered_map < int, int > mpp;
        for (int i = 0; i < n; i++) {
            mpp[a[i]]++;
        }
        long long count = 0;
        for (auto & i: mpp) {
            int freq = i.second;
            if (freq >= 2) {
                count += (long long) freq * (freq - 1) / 2;
            }
        }
        cout << count << endl;
    }
}
