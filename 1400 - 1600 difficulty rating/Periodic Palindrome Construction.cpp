#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p, n;
        cin >> n >> p;
        if (p == 1 || p == 2) {
            cout << "impossible" << endl;
            continue;
        }
        int temp = n / p;
        string s;
        s += "a";
        int val = p - 2;
        while (val--) {
            s += "b";
        }
        s += "a";
        while (temp--) {
            cout << s;
        }
        cout << endl;
    }

}
