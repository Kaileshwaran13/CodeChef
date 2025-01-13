#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                a[i] = count;
            }
            else {
                a[i] = n - count + 1;
                count++;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            cout << a[i] << " ";
        }
        cout << '\n';
    }
}
