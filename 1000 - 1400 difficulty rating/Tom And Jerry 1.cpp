#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d, K;
        cin >> a >> b >> c >> d >> K;
        int x = abs(a - c);
        int y = abs(b - d);
        int di = x + y;

        if (K == di) {
            cout << "YES" << endl;
        }
        else if (K < di) {
            cout << "NO" << endl;
        }
        else if ((K - di) % 2 == 0) {
            cout << "YES" << endl;
        }

        else {
            cout << "NO" << endl;
        }

    }
    return 0;
}
