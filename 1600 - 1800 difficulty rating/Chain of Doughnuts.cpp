#include <bits/stdc++.h>
#define int long long int
using namespace std;


int32_t main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m, one = 0;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) {
            cin >> arr[i];
            if (arr[i] == 1) one++;
        }
        if (one >= m / 2) {
            cout << m / 2 << endl;
            continue;
        }
        sort(arr, arr + m);
        int need = m - 1, ans = 0;
        for (int i = 0; i < m; i++) {
            if (arr[i] == 1) {
                ans++;
                need -= 2;
            } else if (need == arr[i] + 1 || arr[i] == need) {
                ans += arr[i];
                need = 0;
            } else if (need < arr[i]) {
                ans += need;
                need = 0;
            } else {
                ans += arr[i];
                need -= (arr[i] + 1);
            }
            if (need <= 0) break;
        }
        cout << ans << endl;
    }

    return 0;
}
