#include <bits/stdc++.h>
using namespace std;


int main() {
    int tt, n;
    cin >> tt;
    while (tt--) {
        cin >> n;
        cout << ((n % 2 == 0) ? n : (n - 1)) << '\n';
    }
}
