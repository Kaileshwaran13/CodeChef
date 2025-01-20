#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, count = 0;
        cin >> n;
        i = n;
        while (count < n) {
            if (count % 2 == 0) {
                cout << i << " ";
                count++;
            }
            else {
                cout << 2 * i << " ";
                count++;
                i--;
            }
        }
        cout << '\n';
    }
}
