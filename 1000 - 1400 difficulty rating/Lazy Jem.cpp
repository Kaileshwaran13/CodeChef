#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long n, b, m, total = 0, i = 0;
        cin >> n >> b >> m;

        while (n > 0) {
            long operations = (n + 1) / 2;
            total += operations * m + b;
            n -= operations;
            m *= 2;
        }

        cout << total - b << endl; 
    }
}
