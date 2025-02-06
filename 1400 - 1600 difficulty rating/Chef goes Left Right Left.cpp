#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        vector < int > v1;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        bool check = true;
        int max1 = INT_MAX;
        int max2 = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (v1[i] > max1 || v1[i] < max2) {
                check = false;
                break;
            }
            else if (v1[i] > r) {
                max1 = v1[i];
            }
            else if (v1[i] < r) {
                max2 = v1[i];
            }
        }
        if (check == true) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
