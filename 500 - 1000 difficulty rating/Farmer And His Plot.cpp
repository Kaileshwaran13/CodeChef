#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int result = gcd(n, m);
        int a = n / result;
        int b = m / result;

        cout << a * b << endl;
    }

}
