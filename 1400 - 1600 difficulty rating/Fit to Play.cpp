#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int gmin = 0, gmax = 0, diff = 0;
        gmin = v[0];
        for (int i = 0; i < n; i++) {
            if (gmin < v[i]) {
                diff = max(diff, v[i] - gmin);
            }
            else
                gmin = v[i];
        }
        if (diff == 0)
            cout << "UNFIT" << '\n';
        else
            cout << diff << '\n';
    }
}
