#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        if (a == b) {
            cout << 0 << endl;
        } else if ((a ^ b) < n) {
            cout << 1 << endl;
        } else {
            int counta = 0;
            int countn = 0;
            int temp = a ^ b;
            while (temp > 0) {
                temp = temp >> 1;
                counta++;
            }
            n = n - 1;
            while (n > 0) {
                n = n >> 1;
                countn++;
            }
            if (counta > countn) {
                cout << -1 << '\n';
            } else {
                cout << 2 << '\n';
            }
        }
    }
}
