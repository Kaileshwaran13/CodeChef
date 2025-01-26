#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t, n, x, d;
    cin >> t;
    while (t--) {
        cin >> n >> x >> d;
        cout << (n / (x * 5)) + d << endl;
    }

}
