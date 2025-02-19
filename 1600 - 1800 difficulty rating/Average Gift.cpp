#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int maxx = -1e9, minn = 1e9, ele;
        for (int i = 0; i < n; i++) {
            cin >> ele;
            maxx = max(maxx, ele);
            minn = min(minn, ele);
        }
        if (k >= minn and k <= maxx) 
            cout << "YES";
        else 
            cout << "NO";
        cout << '\n';
    }
    return 0;
}
