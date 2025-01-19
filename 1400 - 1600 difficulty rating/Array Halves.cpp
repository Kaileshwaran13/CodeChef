#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t, i, n, k;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n;
        long long int a = 2 * n, j = 0, count = 0;
        long long int arr[a];
        for (k = 0; k < a; k++) {
            cin >> arr[k];
            if (arr[k] > n) {
                count += n - k + j;
                j++;
            }
        }
        cout << count << '\n';
    }
}
