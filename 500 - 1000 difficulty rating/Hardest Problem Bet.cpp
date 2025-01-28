#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    long long int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        int d = min({a,b,c});
        if (d == a) cout << "Draw" << endl;
        if (d == b) cout << "Bob" << endl;
        if (d == c) cout << "Alice" << endl;

    }
    return 0;
}
