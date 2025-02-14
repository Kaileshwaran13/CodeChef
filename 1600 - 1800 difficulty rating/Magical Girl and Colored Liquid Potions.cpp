#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int r, g, b, m;
        cin >> r >> g >> b >> m;
        vector < int > rl;
        vector < int > gl;
        vector < int > bl;
        for (int i = 0; i < r; i++) {
            int a;
            cin >> a;
            rl.push_back(a);
        }
        for (int i = 0; i < g; i++) {
            int a;
            cin >> a;
            gl.push_back(a);
        }
        for (int i = 0; i < b; i++) {
            int a;
            cin >> a;
            bl.push_back(a);
        }
        vector < int > v;
        int red = * max_element(rl.begin(), rl.end());
        v.push_back(red);
        int green = * max_element(gl.begin(), gl.end());
        v.push_back(green);
        int blue = * max_element(bl.begin(), bl.end());
        v.push_back(blue);
        sort(v.begin(), v.end());
        while (m--) {
            v[2] = v[2] / 2;
            sort(v.begin(), v.end());
        }

        cout << v[2] << endl;
    }

}
