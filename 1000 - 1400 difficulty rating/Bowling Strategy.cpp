#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, l;
        cin >> n >> k >> l;
        int i = 1;
        int total_overs_possible = k * l;
        if ((total_overs_possible < n) || (k == 1 && n > 1)) {
            cout << "-1" << endl;
        }
        else {
            while (n > 0) {
                cout << i << " ";
                i++;
                if (i > k) {
                    i = 1;
                }
                n--;
            }
        }
        cout << endl;
    }
}
