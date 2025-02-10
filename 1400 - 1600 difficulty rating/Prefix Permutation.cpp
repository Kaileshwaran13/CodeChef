#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector < int > v(n, 0);
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            v[x - 1] = 1;
        }
        int skip = 1;
        for (int i = 0; i < n; i++) {
            if (v[i] == 0) cout << i + 2 << " ";
            else {
                cout << skip << " ";
                skip = i + 2;
            }
        }
        cout << endl;
    }
    return 0;
}
