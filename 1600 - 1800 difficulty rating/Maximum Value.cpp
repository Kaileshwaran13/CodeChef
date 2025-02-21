#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long int t1 = a[0];
        long long int t2 = a[1];
        long long int t3 = a[n - 2];
        long long int t4 = a[n - 1];
        long long int sum = t1 * t2 + t2 - t1;
        long long int sum0 = t1 * t2 + t1 - t2;
        long long int sum1 = t4 * t3 + t4 - t3;
        long long int sum2 = t4 * t3 + t3 - t4;
        cout << max(sum, max(sum0, max(sum1, sum2))) << endl;
    }
    return 0;
}
