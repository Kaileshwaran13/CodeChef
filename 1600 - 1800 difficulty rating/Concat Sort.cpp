#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < long long > arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector < long long > check(arr.begin(), arr.end());
        sort(check.begin(), check.end());
        int i = 0;
        int j = 0;
        while (j < n) {
            if (arr[j] == check[i]) {
                j++;
                i++;
            } else {
                j++;
            }

        }
        j = 0;
        while (j < n) {
            if (arr[j] == check[i]) {
                i++;
                j++;
            } else {
                j++;
            }
        }
        if (i >= n) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }


    }

}
