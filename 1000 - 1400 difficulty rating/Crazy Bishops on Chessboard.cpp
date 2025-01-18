#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << 0 << '\n';
        else
            cout << 2 * n - (n / 2) - 3 << '\n';
    }
}
