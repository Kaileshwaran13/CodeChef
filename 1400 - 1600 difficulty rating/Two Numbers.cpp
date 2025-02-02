#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        if (n % 2 != 0) {
            a = a * 2;
        }
        if (a > b) {
            cout << a / b << endl;
        }
        else {
            cout << b / a << endl;
        }
    }
    return 0;
}
