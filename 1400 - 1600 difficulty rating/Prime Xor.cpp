#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int z = x ^ y;
        vector < int > v;
        v.push_back(2);
        if (x % 2 == 1)
            v.push_back(x ^ 2);
        else
            v.push_back((y ^ 2) ^ x);
        if (y % 2 == 1)
            v.push_back(y ^ 2);
        else
            v.push_back((x ^ 2) ^ y);
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
