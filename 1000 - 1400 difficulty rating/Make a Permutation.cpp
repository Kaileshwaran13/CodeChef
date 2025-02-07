#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);
        int a = 0;
        if (arr[0] > n) a++;
        for (int i = 1; i < n; i++) {
            if (arr[i] > n) a++;
            else if (arr[i] == arr[i - 1]) a++;
        }
        cout << a << endl;
    }
    return 0;
}
