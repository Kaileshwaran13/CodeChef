#include <iostream>
using namespace std;

int main() {
    long int a[600001], p, x, m = 1000000007;
    a[1] = 2;
    a[2] = 1024;
    for (int i = 3; i < 600001; i++) {
        if (i % 2 == 1)
            a[i] = (2 * a[i - 1]) % m;
        else {
            p = a[i / 2];
            x = (p * p) % m;
            p = x;
            p = (p * p) % m;
            p = (p * p) % m;
            a[i] = (p * x) % m;
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long int b = a[n];
        cout << (b * b) % m << endl;
    }
    return 0;
}
