#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int  n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        long long int  dp[n];
        long long int  sum = arr[0];
        dp[0] = arr[0];
        for (int i = 1; i < n; i++) {
            dp[i] = min(arr[i], dp[i - 1]);
            sum += dp[i];
        }
        cout << sum << endl;
    }
    return 0;
}
