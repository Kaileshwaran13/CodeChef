#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int temp = (k * (k + 1) / 2) + k - 1;
        if (temp <= n) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

}
