#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T != 0) {
        int n, k, sum = 0;
        cin >> n >> k;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        if (sum < n) {
            cout << "NO" << endl;
        }
        else {
            int eachcount = sum / n;
            int remain = sum % n;

            if (remain == 0) {
                cout << "YES" << endl;
            }
            else if (k >= 1) {
                cout << "YES" << endl;

            }
            else {
                cout << "NO" << endl;
            }
        }
        T--;
    }
    return 0;
}
