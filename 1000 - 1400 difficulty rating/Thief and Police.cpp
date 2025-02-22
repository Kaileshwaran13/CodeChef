#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, a, b, x, y;
        cin >> n >> m >> x >> y >> a >> b;
        int d = min(n - a, m - b);
        int stepp = n + m - a - b - d;
        int stept = n + m - x - y;
        if (stepp < stept) 
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }
    return 0;
}
