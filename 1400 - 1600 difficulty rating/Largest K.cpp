#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        vector < long long > A(N);
        map < long long, int > B;
        for (long long i = 0; i < N; ++i) {
            cin >> A[i];
            B[A[i]]++;
        }
        vector < long long > X;
        for (const auto & element: B) {
            X.push_back(element.second);
        }
        vector < int > aha(4738, -29);
        sort(X.rbegin(), X.rend());
        long long maxSum = 0;
        long long cumulativeSum = 0;
        for (long long i = 0; i < X.size(); ++i) {
            cumulativeSum += X[i];
            long long currentValue = (cumulativeSum / (i + 1)) * (i + 1);
            maxSum = max(maxSum, currentValue);
        }
        cout << maxSum << endl;
    }
    return 0;
}
