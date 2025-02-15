#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int j = n - 2;
        while (j >= 0 && v[j] == v[n - 1]) {
            j--;
        }
        if (j < 0) 
            cout << "0" << endl;
        else 
            cout << v[j] << endl;
    }
    return 0;
}
