#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int x;
    cin >> x;
    while (x--) {
        int n, a = 1, ans = 1, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        map < int, int > m;
        for (int i = 0; i < n; i++) m[arr[i]]++;
        for (auto z: m) {
            a *= z.second + 1;
            a %= 1000000007;
            count++;
        }
        ans = a;
        ans %= 1000000007;
        cout << ans - 1 << endl;
    }
}
