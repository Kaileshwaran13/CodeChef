#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) 
            cin >> arr[i];
        unordered_map < int, int > mp;
        for (int i = 1; i <= n; i++) 
            mp[i] = 0;
        bool ans = true;
        for (int i = 0; i < m; i++) {
            mp[arr[i]]++;
            for (auto it: mp) {
                if (abs(mp[arr[i]] - it.second) > 1) {
                    ans = false;
                    break;
                }
            }
            if (ans == false) {
                break;
            }
        }

        if (ans == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
