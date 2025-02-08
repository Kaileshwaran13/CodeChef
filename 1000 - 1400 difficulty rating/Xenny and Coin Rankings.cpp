#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int u, v;
        cin >> u >> v;
        cout << 1 + u + ((u + v) * (u + v + 1)) / 2 << "\n";
    }
}
