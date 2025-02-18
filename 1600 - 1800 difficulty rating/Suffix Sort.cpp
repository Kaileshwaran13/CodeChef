#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int downSlope = 0;
        for (int i = 0; i < n - 1; i++) {
            if (v[i + 1] < v[i]) 
                downSlope++;
        }
        if (downSlope == 0) {
            cout << "YES" << endl << downSlope << endl;
        }
        else if (downSlope == 1 && v.back() <= v.front()) {
            cout << "YES" << endl << downSlope << endl;
        }
        else {
            cout << "NO" << endl;
        }


    }
}
