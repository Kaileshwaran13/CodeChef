#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        while (n--) {
            int i, n, q;
            cin >> i >> n >> q;
            if (n % 2 == 0) {
                cout << n / 2 << endl;
            }
            else if (i == q) {
                cout << n / 2 << endl;
            }
            else {
                cout << n / 2 + 1 << endl;
            }
        }
    }
}
