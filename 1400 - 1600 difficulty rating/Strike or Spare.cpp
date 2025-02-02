#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long p;
        if (n % 2 != 0) 
            p = (n - 1) / 2;
        else 
            p = n / 2;
        cout << 1 << " " << 1;
        for (int i = 0; i < p; i++) {
            cout << 0;
        }
        cout << "\n";
    }
}
