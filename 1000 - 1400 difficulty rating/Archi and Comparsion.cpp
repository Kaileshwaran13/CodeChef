#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        if (n % 2 == 0) {
            if (abs(a) > abs(b)) 
                cout << 1 << '\n';
            else if (abs(b) > abs(a)) 
                cout << 2 << '\n';
            else 
                cout << 0 << '\n';
        } else {
            if (a > b) 
                cout << 1 << '\n';
            else if (b > a) 
                cout << 2 << '\n';
            else 
                cout << 0 << '\n';
        }
    }
}
