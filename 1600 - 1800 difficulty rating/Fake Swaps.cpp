#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0;
        cin >> n;
        string s, p;
        cin >> s >> p;
        for (int i = 0; i < n; i++) {
            if (p[i] == '1') 
                k++;
        }
        if ((k == 0 || k == n) && s != p) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
