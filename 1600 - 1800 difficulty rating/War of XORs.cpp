#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        unordered_map < int, int > mp;
        int od = 0;
        int ev = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]]++;
            if (arr[i] & 1) od++;
            else ev++;
        }
        long long ans = 0;
        ans += 1ll * od * (od - 1) / 2;
        ans += 1ll * ev * (ev - 1) / 2;
        for (auto i: mp) {
            ans -= 1ll * i.second * (i.second - 1) / 2;
        }
        for (auto i: mp) {
            int num2 = 2 ^ i.first;
            if (mp.find(num2) != mp.end()) {
                ans -= 1ll * i.second * mp[num2];
                mp[num2] = 0;
            }
        }
        cout << ans << '\n';

    }
}
