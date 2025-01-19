#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        long long int totalSum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            totalSum += a[i];
        }
        long long int prefixSum = 0;
        long long int minimumTime = totalSum;
        for (int i = 0; i < n; ++i) {
            prefixSum += a[i];
            long long int timeForSecondProcessor = totalSum - prefixSum;
            long long int maxTime = max(prefixSum, timeForSecondProcessor);
            minimumTime = min(minimumTime, maxTime);
        }
        cout << minimumTime << "\n";
    }
}
