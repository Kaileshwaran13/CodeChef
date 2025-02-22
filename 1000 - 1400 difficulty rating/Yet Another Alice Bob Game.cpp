#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
        if (a >= n) {
            cout << "Alice" << endl;
            continue;
        }
        if (n == b + 1) {
            cout << "Bob" << endl;
            continue;
        }
        if (a > b) {
            cout << "Alice" << endl;
            continue;
        }
        if (a == b) {
            if (n % (a + 1) == 0)
                cout << "Bob" << endl;
            else cout << "Alice" << endl;
            continue;
        } 
        else {
            cout << "Bob" << endl;
        }

    }

}
