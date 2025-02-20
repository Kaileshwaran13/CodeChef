#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector < int > a(n);
        unordered_map < int, int > freq, oprs;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
            int xorr = a[i] ^ x;
            if (xorr != a[i]) {
                freq[xorr]++;
                oprs[xorr]++;
            }
        }
        int maxi = 0;
        int mini = INT_MAX;
        for (auto & [num, freqq]: freq) {
            if (freqq > maxi) {
                maxi = freqq;
                mini = oprs[num];
            } else if (freqq == maxi) {
                mini = min(mini, oprs[num]);
            }
        }
        cout << maxi << " " << (mini == INT_MAX ? 0 : mini) << endl;
    }

}
