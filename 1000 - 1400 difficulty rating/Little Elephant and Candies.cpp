#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a;
        cin >> n;
        long c, sum = 0;
        cin >> c;
        for (int i = 0; i < n; i++) {
            cin >> a;
            sum += a;
        }
        if (c >= sum)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

}
