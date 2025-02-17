#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        vector < int > eve, odd;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                eve.push_back(a[i]);
            }
            else {
                odd.push_back(a[i]);
            }
        }
        vector < int > ans;
        int i = 0, j = 0, k = 0;
        while (i < eve.size()) {
            ans.push_back(eve[i]);
            i++;
        }
        while (j < odd.size()) {
            ans.push_back(odd[j]);
            j++;
        }
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
