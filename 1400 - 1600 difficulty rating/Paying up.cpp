#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector < int > d(n);

        for (int i = 0; i < n; i++) {
            cin >> d[i];
        }
        bool flag = false;

        for (int i = 1; i < (1 << n); i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    sum += d[j];
                }
            }
            if (sum == m) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}
