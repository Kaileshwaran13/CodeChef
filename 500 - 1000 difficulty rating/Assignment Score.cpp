#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        int total = (n + 1) * 100;
        int required = total / 2;
        int lastscore = required - sum;
        if (lastscore > 100) {
            cout << -1 << endl;
        }
        else if (lastscore <= 0) {
            cout << 0 << endl;
        }
        else {
            cout << lastscore << endl;
        }

    }
    return 0;

}
