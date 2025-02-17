#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int n;
        cin >> n;
        vector<int> W(n);
        for (int i = 0; i < n; ++i) {
            cin >> W[i];
        }
        vector<int> X(n);
        for (int i = 0; i < n; ++i) {
            X[i] = W[i] - (i + 1);
        }
        bool allEqual = true;
        for (int i = 1; i < n; ++i) {
            if (X[i] != X[0]) {
                allEqual = false;
                break;
            }
        }
        if (allEqual) {
            cout << n << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}
