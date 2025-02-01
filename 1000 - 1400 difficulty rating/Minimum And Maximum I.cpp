#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long m = n / 2;
        long long ans = m * (m + 1);
        if (n % 2 == 1) {
            ans = ans + (m + 1);
        }
        cout << ans << endl;
    }

}
