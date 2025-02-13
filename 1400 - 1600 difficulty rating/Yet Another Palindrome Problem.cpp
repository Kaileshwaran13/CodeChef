#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v1;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        bool check = true;
        int ans = 0;
        int half = n / 2;
        int i = half - 1;
        int j = n - half;
        while (i >= 0) {
            int dd = v1[i] + ans;
            if (dd > v1[j]) {
                check = false;
                break;
            } else if (dd == v1[j]) {
                i--;
                j++;
                continue;
            } else {
                int diff = v1[j] - dd;
                ans = ans + diff;
                i--;
                j++;
            }
        }
        if (check == true) {
            cout << ans << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
