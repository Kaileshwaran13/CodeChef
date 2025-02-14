#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        long int sum = 0, sum2 = 0;
        for (int i = n - 1; i > n - 2 * k; i -= 2)
            sum += arr[i];
        for (int i = n - 2; i > n - 2 * k - 1; i -= 2)
            sum2 += arr[i];
        sum2 += arr[n - 2 * k - 1];
        long long int finsum = sum2 > sum ? sum2 : sum;
        cout << finsum << "\n";
    }
    return 0;
}
