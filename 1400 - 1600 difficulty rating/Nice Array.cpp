#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        vector < int > mins;
        vector < int > maxs;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            double d = (double) arr[i] / (double) k;
            int m = min(floor(d), ceil(d));
            int temp = max(floor(d), ceil(d));
            mins.push_back(m);
            maxs.push_back(temp);
        }
        int ans = accumulate(mins.begin(), mins.end(), 0);
        int ans1 = accumulate(maxs.begin(), maxs.end(), 0);
        if (ans == 0 || ans1 == 0) 
            cout << "YES" << endl;
        else if (ans > 0 && ans1 < 0) 
            cout << "YES" << endl;
        else if (ans < 0 && ans1 > 0) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}
