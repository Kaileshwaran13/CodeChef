#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int c_1 = 0, c_0 = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i]) c_1++;
            else c_0++;
        }
        int c = min(c_0, c_1);
        int x = 0;
        if (c < c_1) x = (c_1 - c) / 3;
        cout << x + c << '\n';
    }
}
