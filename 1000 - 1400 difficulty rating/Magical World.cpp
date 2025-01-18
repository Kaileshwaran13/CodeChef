#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x;
        cin >> a >> b >> x;
        int a1 = a * b;
        int a2 = x * x;
        if (a2 >= a1)
            cout << 0 << endl;
        else {
            if (min(a, b) > (x * x))
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
    }
}
