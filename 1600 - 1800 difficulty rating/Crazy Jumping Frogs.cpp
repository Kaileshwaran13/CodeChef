#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0)
                even += 1;
            else
                odd += 1;
        }
        int ans = max(even, odd);
        cout << ans << endl;

    }

}
