#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        long long Sales[N];
        long long PSum[N];
        long long Sum = 0;
        long long MaxSalesOnDay[N];
        for (int i = 0; i < N; i++) {
            cin >> Sales[i];
            Sum += Sales[i];
            PSum[i] = Sum;
            MaxSalesOnDay[i] = PSum[i] + Sales[i];
        }
        long long ans = * max_element(MaxSalesOnDay, MaxSalesOnDay + N);
        cout << ans << endl;
    }
}
