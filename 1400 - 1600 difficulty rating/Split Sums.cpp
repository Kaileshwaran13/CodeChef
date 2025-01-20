#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        long long sum = n * (n + 1) / 2;
        if ((sum + m) % 2 == 0) {
            long long a = (sum + m) / 2;
            long long b = abs(sum - a);
            if (gcd(a, b) == 1)
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
        else cout << "No" << '\n';
    }
}
