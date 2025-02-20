#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector < int > v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        map < int, int > my;
        map < int, int > ::iterator it;
        for (int i = 0; i < n; i++) {
            if (v[i] < m)
                my[v[i]]++;
        }
        if (my.size() == m - 1) { 
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (v[i] < m || v[i] > m) cnt++;
            }
            cout << cnt << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
