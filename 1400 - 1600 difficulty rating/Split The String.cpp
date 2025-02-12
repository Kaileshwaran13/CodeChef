#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, o = 0, z = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') z++;
            else o++;
        }
        int rem = abs(o - z);
        int x = rem / k;
        if (x * k == rem) 
            cout << x << endl;
        else 
            cout << x + 1 << endl;
    }
    return 0;
}
