#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int tc = 1;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        if (n & 1) {
            cout << "-1\n";
            continue;
        }
        vector < int > v(n + 1, 0);
        int p = 2;
        for (int i = 1; i <= n; i += 2) {
            v[i] = p;
            p += 2;
        }
        p = 1;
        for (int i = 2; i <= n; i += 2) {
            v[i] = p;
            p += 2;
        }
        for (int i = 1; i <= n; i++)
            cout << v[i] << " ";
        cout << "\n";
    }
    return 0;
}
