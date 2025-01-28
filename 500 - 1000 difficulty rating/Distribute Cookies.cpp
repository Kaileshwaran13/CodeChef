#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        long long int n, m;
        cin >> n >> m;
        int x = m % n;
        int y = n - x;
        int ans = min(x, y);
        if (m < n) cout << n - m << endl;
        else
            cout << ans << endl;

    }

}
