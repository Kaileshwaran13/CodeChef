#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0, flag = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++) {
            if (a[i] <= count) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
