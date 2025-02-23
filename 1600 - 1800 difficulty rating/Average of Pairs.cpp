#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<long long> freq(2001, 0);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i] + 1000]++;
        }
        long long count = 0;
        for (int i = 0; i < 2001; i++) {
            if (freq[i] == 0) 
                continue;
            if (freq[i] > 1) {
                count += (freq[i] * (freq[i] - 1)) / 2;
            }
            for (int j = i + 1; j < 2001; j++) {
                if (freq[j] == 0) 
                    continue;
                long long mid = (i + j) / 2;
                if (2 * mid == i + j && freq[mid] > 0) {
                    count += freq[i] * freq[j];
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
