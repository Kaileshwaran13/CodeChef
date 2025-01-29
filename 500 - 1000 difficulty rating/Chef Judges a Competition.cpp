#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n], alice = 0, bob = 0, amax = 0, bmax = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            alice += a[i];
            amax = max(a[i], amax);
        }
        alice = alice - amax;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            bob += b[i];
            bmax = max(b[i], bmax);
        }
        bob = bob - bmax;
        if (alice < bob) {
            cout << "Alice" << endl;
        }
        else if (alice > bob) {
            cout << "Bob" << endl;;
        }
        else {
            cout << "Draw" << endl;
        }
    }

    return 0;
}
