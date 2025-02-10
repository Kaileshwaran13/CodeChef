#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 1e3 + 10;
    int x;
    cin >> x;

    while (x--) {
        int n;
        cin >> n;


        int arr[n];
        vector < int > dp(N, 0);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            dp[arr[i]]++;
        }

        bool it = true;
        for (int i = 0; i < n; i += dp[arr[i]]) {
            for (int k = i + dp[arr[i]]; k < n; ++k) {
                if (dp[arr[i]] == dp[arr[k]]) 
                    it = false;
            }
        }
        if (it == false) {
            cout << "NO\n";
            continue;
        }

        for (int i = 0; i < n; i += dp[arr[i]]) {
            for (int j = i + 1; j < dp[arr[i]] + i; ++j) {
                if (arr[j] != arr[i]) {
                    it = false;
                }
            }
        }

        cout << (it ? "YES" : "NO") << "\n";

    }
    return 0;
}
