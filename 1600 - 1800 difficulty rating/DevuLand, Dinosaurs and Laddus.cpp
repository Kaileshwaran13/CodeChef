#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long ans = 0, sum = 0;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++) {
            sum += A[i];
            ans += abs(sum);
        }
        cout << ans << endl;
    }
    return 0;
}
